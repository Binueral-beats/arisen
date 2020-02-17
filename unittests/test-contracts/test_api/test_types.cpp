/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#include <ariseniolib/arisenio.hpp>

#include "test_api.hpp"

void test_types::types_size() {

   arisenio_assert( sizeof(int64_t)   ==  8, "int64_t size != 8"   );
   arisenio_assert( sizeof(uint64_t)  ==  8, "uint64_t size != 8"  );
   arisenio_assert( sizeof(uint32_t)  ==  4, "uint32_t size != 4"  );
   arisenio_assert( sizeof(int32_t)   ==  4, "int32_t size != 4"   );
   arisenio_assert( sizeof(uint128_t) == 16, "uint128_t size != 16");
   arisenio_assert( sizeof(int128_t)  == 16, "int128_t size != 16" );
   arisenio_assert( sizeof(uint8_t)   ==  1, "uint8_t size != 1"   );

   arisenio_assert( sizeof(arisenio::name) ==  8, "name size !=  8");
}

void test_types::char_to_symbol() {

   arisenio_assert( arisenio::name::char_to_value('1') ==  1, "arisenio::char_to_symbol('1') !=  1" );
   arisenio_assert( arisenio::name::char_to_value('2') ==  2, "arisenio::char_to_symbol('2') !=  2" );
   arisenio_assert( arisenio::name::char_to_value('3') ==  3, "arisenio::char_to_symbol('3') !=  3" );
   arisenio_assert( arisenio::name::char_to_value('4') ==  4, "arisenio::char_to_symbol('4') !=  4" );
   arisenio_assert( arisenio::name::char_to_value('5') ==  5, "arisenio::char_to_symbol('5') !=  5" );
   arisenio_assert( arisenio::name::char_to_value('a') ==  6, "arisenio::char_to_symbol('a') !=  6" );
   arisenio_assert( arisenio::name::char_to_value('b') ==  7, "arisenio::char_to_symbol('b') !=  7" );
   arisenio_assert( arisenio::name::char_to_value('c') ==  8, "arisenio::char_to_symbol('c') !=  8" );
   arisenio_assert( arisenio::name::char_to_value('d') ==  9, "arisenio::char_to_symbol('d') !=  9" );
   arisenio_assert( arisenio::name::char_to_value('e') == 10, "arisenio::char_to_symbol('e') != 10" );
   arisenio_assert( arisenio::name::char_to_value('f') == 11, "arisenio::char_to_symbol('f') != 11" );
   arisenio_assert( arisenio::name::char_to_value('g') == 12, "arisenio::char_to_symbol('g') != 12" );
   arisenio_assert( arisenio::name::char_to_value('h') == 13, "arisenio::char_to_symbol('h') != 13" );
   arisenio_assert( arisenio::name::char_to_value('i') == 14, "arisenio::char_to_symbol('i') != 14" );
   arisenio_assert( arisenio::name::char_to_value('j') == 15, "arisenio::char_to_symbol('j') != 15" );
   arisenio_assert( arisenio::name::char_to_value('k') == 16, "arisenio::char_to_symbol('k') != 16" );
   arisenio_assert( arisenio::name::char_to_value('l') == 17, "arisenio::char_to_symbol('l') != 17" );
   arisenio_assert( arisenio::name::char_to_value('m') == 18, "arisenio::char_to_symbol('m') != 18" );
   arisenio_assert( arisenio::name::char_to_value('n') == 19, "arisenio::char_to_symbol('n') != 19" );
   arisenio_assert( arisenio::name::char_to_value('o') == 20, "arisenio::char_to_symbol('o') != 20" );
   arisenio_assert( arisenio::name::char_to_value('p') == 21, "arisenio::char_to_symbol('p') != 21" );
   arisenio_assert( arisenio::name::char_to_value('q') == 22, "arisenio::char_to_symbol('q') != 22" );
   arisenio_assert( arisenio::name::char_to_value('r') == 23, "arisenio::char_to_symbol('r') != 23" );
   arisenio_assert( arisenio::name::char_to_value('s') == 24, "arisenio::char_to_symbol('s') != 24" );
   arisenio_assert( arisenio::name::char_to_value('t') == 25, "arisenio::char_to_symbol('t') != 25" );
   arisenio_assert( arisenio::name::char_to_value('u') == 26, "arisenio::char_to_symbol('u') != 26" );
   arisenio_assert( arisenio::name::char_to_value('v') == 27, "arisenio::char_to_symbol('v') != 27" );
   arisenio_assert( arisenio::name::char_to_value('w') == 28, "arisenio::char_to_symbol('w') != 28" );
   arisenio_assert( arisenio::name::char_to_value('x') == 29, "arisenio::char_to_symbol('x') != 29" );
   arisenio_assert( arisenio::name::char_to_value('y') == 30, "arisenio::char_to_symbol('y') != 30" );
   arisenio_assert( arisenio::name::char_to_value('z') == 31, "arisenio::char_to_symbol('z') != 31" );

   for(unsigned char i = 0; i<255; i++) {
      if( (i >= 'a' && i <= 'z') || (i >= '1' || i <= '5') ) continue;
      arisenio_assert( arisenio::name::char_to_value((char)i) == 0, "arisenio::char_to_symbol() != 0" );
   }
}

void test_types::string_to_name() {
   return;
   arisenio_assert( arisenio::name("a") == "a"_n, "arisenio::string_to_name(a)" );
   arisenio_assert( arisenio::name("ba") == "ba"_n, "arisenio::string_to_name(ba)" );
   arisenio_assert( arisenio::name("cba") == "cba"_n, "arisenio::string_to_name(cba)" );
   arisenio_assert( arisenio::name("dcba") == "dcba"_n, "arisenio::string_to_name(dcba)" );
   arisenio_assert( arisenio::name("edcba") == "edcba"_n, "arisenio::string_to_name(edcba)" );
   arisenio_assert( arisenio::name("fedcba") == "fedcba"_n, "arisenio::string_to_name(fedcba)" );
   arisenio_assert( arisenio::name("gfedcba") == "gfedcba"_n, "arisenio::string_to_name(gfedcba)" );
   arisenio_assert( arisenio::name("hgfedcba") == "hgfedcba"_n, "arisenio::string_to_name(hgfedcba)" );
   arisenio_assert( arisenio::name("ihgfedcba") == "ihgfedcba"_n, "arisenio::string_to_name(ihgfedcba)" );
   arisenio_assert( arisenio::name("jihgfedcba") == "jihgfedcba"_n, "arisenio::string_to_name(jihgfedcba)" );
   arisenio_assert( arisenio::name("kjihgfedcba") == "kjihgfedcba"_n, "arisenio::string_to_name(kjihgfedcba)" );
   arisenio_assert( arisenio::name("lkjihgfedcba") == "lkjihgfedcba"_n, "arisenio::string_to_name(lkjihgfedcba)" );
   arisenio_assert( arisenio::name("mlkjihgfedcba") == "mlkjihgfedcba"_n, "arisenio::string_to_name(mlkjihgfedcba)" );
}
