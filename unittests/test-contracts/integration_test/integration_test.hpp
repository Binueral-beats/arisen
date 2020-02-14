/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] integration_test : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void store( arisenio::name from, arisenio::name to, uint64_t num );

   struct [[arisenio::table("payloads")]] payload {
      uint64_t              key;
      std::vector<uint64_t> data;

      uint64_t primary_key()const { return key; }

      ARISENLIB_SERIALIZE( payload, (key)(data) )
   };

   using payloads_table = arisenio::multi_index< "payloads"_n,  payload >;

};
