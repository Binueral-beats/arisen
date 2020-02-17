/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] test_api_db : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action("pg")]]
   void primary_i64_general();

   [[arisenio::action("pl")]]
   void primary_i64_lowerbound();

   [[arisenio::action("pu")]]
   void primary_i64_upperbound();

   [[arisenio::action("s1g")]]
   void idx64_general();

   [[arisenio::action("s1l")]]
   void idx64_lowerbound();

   [[arisenio::action("s1u")]]
   void idx64_upperbound();

   [[arisenio::action("tia")]]
   void test_invalid_access( arisenio::name code, uint64_t val, uint32_t index, bool store );

   [[arisenio::action("sdnancreate")]]
   void idx_double_nan_create_fail();

   [[arisenio::action("sdnanmodify")]]
   void idx_double_nan_modify_fail();

   [[arisenio::action("sdnanlookup")]]
   void idx_double_nan_lookup_fail( uint32_t lookup_type );

   [[arisenio::action("sk32align")]]
   void misaligned_secondary_key256_tests();

};
