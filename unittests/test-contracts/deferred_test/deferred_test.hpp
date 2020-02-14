/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>
#include <vector>

class [[arisenio::contract]] deferred_test : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void defercall( arisenio::name payer, uint64_t sender_id, arisenio::name contract, uint64_t payload );

   [[arisenio::action]]
   void delayedcall( arisenio::name payer, uint64_t sender_id, arisenio::name contract,
                     uint64_t payload, uint32_t delay_sec, bool replace_existing );

   [[arisenio::action]]
   void deferfunc( uint64_t payload );
   using deferfunc_action = arisenio::action_wrapper<"deferfunc"_n, &deferred_test::deferfunc>;

   [[arisenio::action]]
   void inlinecall( arisenio::name contract, arisenio::name authorizer, uint64_t payload );

   [[arisenio::action]]
   void fail();

   [[arisenio::on_notify("arisenio::onerror")]]
   void on_error( uint128_t sender_id, arisenio::ignore<std::vector<char>> sent_trx );
};
