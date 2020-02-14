/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] payloadless : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void doit();
};
