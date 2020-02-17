/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] snapshot_test : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void increment( uint32_t value );

   struct [[arisenio::table("data")]] main_record {
      uint64_t           id         = 0;
      double             index_f64  = 0.0;
      long double        index_f128 = 0.0L;
      uint64_t           index_i64  = 0ULL;
      uint128_t          index_i128 = 0ULL;
      arisenio::checksum256 index_i256;

      uint64_t                  primary_key()const    { return id; }
      double                    get_index_f64()const  { return index_f64 ; }
      long double               get_index_f128()const { return index_f128; }
      uint64_t                  get_index_i64()const  { return index_i64 ; }
      uint128_t                 get_index_i128()const { return index_i128; }
      const arisenio::checksum256& get_index_i256()const { return index_i256; }

      rsnLIB_SERIALIZE( main_record, (id)(index_f64)(index_f128)(index_i64)(index_i128)(index_i256) )
   };

   using data_table = arisenio::multi_index<"data"_n, main_record,
      arisenio::indexed_by< "byf"_n,    arisenio::const_mem_fun< main_record, double,
                                                           &main_record::get_index_f64 > >,
      arisenio::indexed_by< "byff"_n,   arisenio::const_mem_fun< main_record, long double,
                                                           &main_record::get_index_f128> >,
      arisenio::indexed_by< "byi"_n,    arisenio::const_mem_fun< main_record, uint64_t,
                                                           &main_record::get_index_i64 > >,
      arisenio::indexed_by< "byii"_n,   arisenio::const_mem_fun< main_record, uint128_t,
                                                           &main_record::get_index_i128 > >,
      arisenio::indexed_by< "byiiii"_n, arisenio::const_mem_fun< main_record, const arisenio::checksum256&,
                                                           &main_record::get_index_i256 > >
   >;
};
