/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] payloadless : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void doit();
};
