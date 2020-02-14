/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#include <ARISENlib/arisen.hpp>

#include "test_api.hpp"

void test_types::types_size() {

   ARISEN_assert( sizeof(int64_t)   ==  8, "int64_t size != 8"   );
   ARISEN_assert( sizeof(uint64_t)  ==  8, "uint64_t size != 8"  );
   ARISEN_assert( sizeof(uint32_t)  ==  4, "uint32_t size != 4"  );
   ARISEN_assert( sizeof(int32_t)   ==  4, "int32_t size != 4"   );
   ARISEN_assert( sizeof(uint128_t) == 16, "uint128_t size != 16");
   ARISEN_assert( sizeof(int128_t)  == 16, "int128_t size != 16" );
   ARISEN_assert( sizeof(uint8_t)   ==  1, "uint8_t size != 1"   );

   ARISEN_assert( sizeof(arisen::name) ==  8, "name size !=  8");
}

void test_types::char_to_symbol() {

   ARISEN_assert( arisen::name::char_to_value('1') ==  1, "arisen::char_to_symbol('1') !=  1" );
   ARISEN_assert( arisen::name::char_to_value('2') ==  2, "arisen::char_to_symbol('2') !=  2" );
   ARISEN_assert( arisen::name::char_to_value('3') ==  3, "arisen::char_to_symbol('3') !=  3" );
   ARISEN_assert( arisen::name::char_to_value('4') ==  4, "arisen::char_to_symbol('4') !=  4" );
   ARISEN_assert( arisen::name::char_to_value('5') ==  5, "arisen::char_to_symbol('5') !=  5" );
   ARISEN_assert( arisen::name::char_to_value('a') ==  6, "arisen::char_to_symbol('a') !=  6" );
   ARISEN_assert( arisen::name::char_to_value('b') ==  7, "arisen::char_to_symbol('b') !=  7" );
   ARISEN_assert( arisen::name::char_to_value('c') ==  8, "arisen::char_to_symbol('c') !=  8" );
   ARISEN_assert( arisen::name::char_to_value('d') ==  9, "arisen::char_to_symbol('d') !=  9" );
   ARISEN_assert( arisen::name::char_to_value('e') == 10, "arisen::char_to_symbol('e') != 10" );
   ARISEN_assert( arisen::name::char_to_value('f') == 11, "arisen::char_to_symbol('f') != 11" );
   ARISEN_assert( arisen::name::char_to_value('g') == 12, "arisen::char_to_symbol('g') != 12" );
   ARISEN_assert( arisen::name::char_to_value('h') == 13, "arisen::char_to_symbol('h') != 13" );
   ARISEN_assert( arisen::name::char_to_value('i') == 14, "arisen::char_to_symbol('i') != 14" );
   ARISEN_assert( arisen::name::char_to_value('j') == 15, "arisen::char_to_symbol('j') != 15" );
   ARISEN_assert( arisen::name::char_to_value('k') == 16, "arisen::char_to_symbol('k') != 16" );
   ARISEN_assert( arisen::name::char_to_value('l') == 17, "arisen::char_to_symbol('l') != 17" );
   ARISEN_assert( arisen::name::char_to_value('m') == 18, "arisen::char_to_symbol('m') != 18" );
   ARISEN_assert( arisen::name::char_to_value('n') == 19, "arisen::char_to_symbol('n') != 19" );
   ARISEN_assert( arisen::name::char_to_value('o') == 20, "arisen::char_to_symbol('o') != 20" );
   ARISEN_assert( arisen::name::char_to_value('p') == 21, "arisen::char_to_symbol('p') != 21" );
   ARISEN_assert( arisen::name::char_to_value('q') == 22, "arisen::char_to_symbol('q') != 22" );
   ARISEN_assert( arisen::name::char_to_value('r') == 23, "arisen::char_to_symbol('r') != 23" );
   ARISEN_assert( arisen::name::char_to_value('s') == 24, "arisen::char_to_symbol('s') != 24" );
   ARISEN_assert( arisen::name::char_to_value('t') == 25, "arisen::char_to_symbol('t') != 25" );
   ARISEN_assert( arisen::name::char_to_value('u') == 26, "arisen::char_to_symbol('u') != 26" );
   ARISEN_assert( arisen::name::char_to_value('v') == 27, "arisen::char_to_symbol('v') != 27" );
   ARISEN_assert( arisen::name::char_to_value('w') == 28, "arisen::char_to_symbol('w') != 28" );
   ARISEN_assert( arisen::name::char_to_value('x') == 29, "arisen::char_to_symbol('x') != 29" );
   ARISEN_assert( arisen::name::char_to_value('y') == 30, "arisen::char_to_symbol('y') != 30" );
   ARISEN_assert( arisen::name::char_to_value('z') == 31, "arisen::char_to_symbol('z') != 31" );

   for(unsigned char i = 0; i<255; i++) {
      if( (i >= 'a' && i <= 'z') || (i >= '1' || i <= '5') ) continue;
      ARISEN_assert( arisen::name::char_to_value((char)i) == 0, "arisen::char_to_symbol() != 0" );
   }
}

void test_types::string_to_name() {
   return;
   ARISEN_assert( arisen::name("a") == "a"_n, "arisen::string_to_name(a)" );
   ARISEN_assert( arisen::name("ba") == "ba"_n, "arisen::string_to_name(ba)" );
   ARISEN_assert( arisen::name("cba") == "cba"_n, "arisen::string_to_name(cba)" );
   ARISEN_assert( arisen::name("dcba") == "dcba"_n, "arisen::string_to_name(dcba)" );
   ARISEN_assert( arisen::name("edcba") == "edcba"_n, "arisen::string_to_name(edcba)" );
   ARISEN_assert( arisen::name("fedcba") == "fedcba"_n, "arisen::string_to_name(fedcba)" );
   ARISEN_assert( arisen::name("gfedcba") == "gfedcba"_n, "arisen::string_to_name(gfedcba)" );
   ARISEN_assert( arisen::name("hgfedcba") == "hgfedcba"_n, "arisen::string_to_name(hgfedcba)" );
   ARISEN_assert( arisen::name("ihgfedcba") == "ihgfedcba"_n, "arisen::string_to_name(ihgfedcba)" );
   ARISEN_assert( arisen::name("jihgfedcba") == "jihgfedcba"_n, "arisen::string_to_name(jihgfedcba)" );
   ARISEN_assert( arisen::name("kjihgfedcba") == "kjihgfedcba"_n, "arisen::string_to_name(kjihgfedcba)" );
   ARISEN_assert( arisen::name("lkjihgfedcba") == "lkjihgfedcba"_n, "arisen::string_to_name(lkjihgfedcba)" );
   ARISEN_assert( arisen::name("mlkjihgfedcba") == "mlkjihgfedcba"_n, "arisen::string_to_name(mlkjihgfedcba)" );
}
