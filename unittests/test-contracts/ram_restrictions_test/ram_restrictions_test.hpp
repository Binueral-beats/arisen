/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] ram_restrictions_test : public arisenio::contract {
public:
   struct [[arisenio::table]] data {
      uint64_t           key;
      std::vector<char>  value;

      uint64_t primary_key() const { return key; }
   };

   typedef arisenio::multi_index<"tablea"_n, data> tablea;
   typedef arisenio::multi_index<"tableb"_n, data> tableb;

public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void noop();

   [[arisenio::action]]
   void setdata( uint32_t len1, uint32_t len2, arisenio::name payer );

   [[arisenio::action]]
   void notifysetdat( arisenio::name acctonotify, uint32_t len1, uint32_t len2, arisenio::name payer );

   [[arisenio::on_notify("tester2::notifysetdat")]]
   void on_notify_setdata( arisenio::name acctonotify, uint32_t len1, uint32_t len2, arisenio::name payer );

   [[arisenio::action]]
   void senddefer( uint64_t senderid, arisenio::name payer );

   [[arisenio::action]]
   void notifydefer( arisenio::name acctonotify, uint64_t senderid, arisenio::name payer );

   [[arisenio::on_notify("tester2::notifydefer")]]
   void on_notifydefer( arisenio::name acctonotify, uint64_t senderid, arisenio::name payer );

};
