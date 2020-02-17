/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] restrict_action_test : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void noop( );

   [[arisenio::action]]
   void sendinline( arisenio::name authorizer );

   [[arisenio::action]]
   void senddefer( arisenio::name authorizer, uint32_t senderid );


   [[arisenio::action]]
   void notifyinline( arisenio::name acctonotify, arisenio::name authorizer );

   [[arisenio::action]]
   void notifydefer( arisenio::name acctonotify, arisenio::name authorizer, uint32_t senderid );

   [[arisenio::on_notify("testacc::notifyinline")]]
   void on_notify_inline( arisenio::name acctonotify, arisenio::name authorizer );

   [[arisenio::on_notify("testacc::notifydefer")]]
   void on_notify_defer( arisenio::name acctonotify, arisenio::name authorizer, uint32_t senderid );
};
