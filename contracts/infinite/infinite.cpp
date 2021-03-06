/**
 *  @file
 *  @copyright defined in arisen/LICENSE.txt
 */
#include <arisenlib/print.hpp> /// defines transfer struct (abi)

extern "C" {

    /// The apply method just prints forever
    void apply( uint64_t, uint64_t, uint64_t ) {
       int idx = 0;
       while(true) {
          arisen::print(idx++);
       }
    }
}
