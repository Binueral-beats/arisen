/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] noop : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void anyaction( arisenio::name                       from,
                   const arisenio::ignore<std::string>& type,
                   const arisenio::ignore<std::string>& data );
};
