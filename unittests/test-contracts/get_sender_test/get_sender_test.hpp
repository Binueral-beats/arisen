/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

namespace arisenio {
   namespace internal_use_do_not_use {
      extern "C" {
         __attribute__((arisenio_wasm_import))
         uint64_t get_sender();
      }
   }
}

namespace arisenio {
   name get_sender() {
      return name( internal_use_do_not_use::get_sender() );
   }
}

class [[arisenio::contract]] get_sender_test : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void assertsender( arisenio::name expected_sender );
   using assertsender_action = arisenio::action_wrapper<"assertsender"_n, &get_sender_test::assertsender>;

   [[arisenio::action]]
   void sendinline( arisenio::name to, arisenio::name expected_sender );

   [[arisenio::action]]
   void notify( arisenio::name to, arisenio::name expected_sender, bool send_inline );

   // arisenio.cdt 1.6.1 has a problem with "*::notify" so hardcode to tester1 for now.
   // TODO: Change it back to "*::notify" when the bug is fixed in arisenio.cdt.
   [[arisenio::on_notify("tester1::notify")]]
   void on_notify( arisenio::name to, arisenio::name expected_sender, bool send_inline );

};
