/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>
#include <arisenio/singleton.hpp>
#include <arisenio/asset.hpp>

// Extacted from arisenio.token contract:
namespace arisenio {
   class [[arisenio::contract("arisenio.token")]] token : public arisenio::contract {
   public:
      using arisenio::contract::contract;

      [[arisenio::action]]
      void transfer( arisenio::name        from,
                     arisenio::name        to,
                     arisenio::asset       quantity,
                     const std::string& memo );
      using transfer_action = arisenio::action_wrapper<"transfer"_n, &token::transfer>;
   };
}

// This contract:
class [[arisenio::contract]] proxy : public arisenio::contract {
public:
   proxy( arisenio::name self, arisenio::name first_receiver, arisenio::datastream<const char*> ds );

   [[arisenio::action]]
   void setowner( arisenio::name owner, uint32_t delay );

   [[arisenio::on_notify("arisenio.token::transfer")]]
   void on_transfer( arisenio::name        from,
                     arisenio::name        to,
                     arisenio::asset       quantity,
                     const std::string& memo );

   [[arisenio::on_notify("arisenio::onerror")]]
   void on_error( uint128_t sender_id, arisenio::ignore<std::vector<char>> sent_trx );

   struct [[arisenio::table]] config {
      arisenio::name owner;
      uint32_t    delay   = 0;
      uint32_t    next_id = 0;

      ARISENLIB_SERIALIZE( config, (owner)(delay)(next_id) )
   };

   using config_singleton = arisenio::singleton< "config"_n,  config >;

protected:
   config_singleton _config;
};
