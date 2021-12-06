#ifndef PALETTES_H_
#define PALETTES_H_

// Gradient Color Palette definitions for 33 different cpt-city color palettes.
//    956 bytes of PROGMEM for all of the palettes together,
//   +618 bytes of PROGMEM for gradient palette code (AVR).
//  1,494 bytes total for all 34 color palettes and associated code.

// Gradient palette "ib_jul01_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ing/xmas/tn/ib_jul01.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( ib_jul01_gp ) {
    0, 194,  1,  1,
   94,   1, 29, 18,
  132,  57,131, 28,
  255, 113,  1,  1};

// Gradient palette "es_vintage_57_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/vintage/tn/es_vintage_57.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_vintage_57_gp ) {
    0,   2,  1,  1,
   53,  18,  1,  0,
  104,  69, 29,  1,
  153, 167,135, 10,
  255,  46, 56,  4};

// Gradient palette "es_vintage_01_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/vintage/tn/es_vintage_01.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_vintage_01_gp ) {
    0,   4,  1,  1,
   51,  16,  0,  1,
   76,  97,104,  3,
  101, 255,131, 19,
  127,  67,  9,  4,
  153,  16,  0,  1,
  229,   4,  1,  1,
  255,   4,  1,  1};

// Gradient palette "es_rivendell_15_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/rivendell/tn/es_rivendell_15.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_rivendell_15_gp ) {
    0,   1, 14,  5,
  101,  16, 36, 14,
  165,  56, 68, 30,
  242, 150,156, 99,
  255, 150,156, 99};

// Gradient palette "rgi_15_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds/rgi/tn/rgi_15.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 36 bytes of program space.

DEFINE_GRADIENT_PALETTE( rgi_15_gp ) {
    0,   4,  1, 31,
   31,  55,  1, 16,
   63, 197,  3,  7,
   95,  59,  2, 17,
  127,   6,  2, 34,
  159,  39,  6, 33,
  191, 112, 13, 32,
  223,  56,  9, 35,
  255,  22,  6, 38};

// Gradient palette "retro2_16_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ma/retro2/tn/retro2_16.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 8 bytes of program space.

DEFINE_GRADIENT_PALETTE( retro2_16_gp ) {
    0, 188,135,  1,
  255,  46,  7,  1};

// Gradient palette "Analogous_1_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/red/tn/Analogous_1.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Analogous_1_gp ) {
    0,   3,  0,255,
   63,  23,  0,255,
  127,  67,  0,255,
  191, 142,  0, 45,
  255, 255,  0,  0};

// Gradient palette "es_pinksplash_08_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/pink_splash/tn/es_pinksplash_08.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_pinksplash_08_gp ) {
    0, 126, 11,255,
  127, 197,  1, 22,
  175, 210,157,172,
  221, 157,  3,112,
  255, 157,  3,112};

// Gradient palette "es_pinksplash_07_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/pink_splash/tn/es_pinksplash_07.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_pinksplash_07_gp ) {
    0, 229,  1,  1,
   61, 242,  4, 63,
  101, 255, 12,255,
  127, 249, 81,252,
  153, 255, 11,235,
  193, 244,  5, 68,
  255, 232,  1,  5};

// Gradient palette "Coral_reef_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/other/tn/Coral_reef.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( Coral_reef_gp ) {
    0,  40,199,197,
   50,  10,152,155,
   96,   1,111,120,
   96,  43,127,162,
  139,  10, 73,111,
  255,   1, 34, 71};

// Gradient palette "es_ocean_breeze_068_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/ocean_breeze/tn/es_ocean_breeze_068.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_ocean_breeze_068_gp ) {
    0, 100,156,153,
   51,   1, 99,137,
  101,   1, 68, 84,
  104,  35,142,168,
  178,   0, 63,117,
  255,   1, 10, 10};

// Gradient palette "es_ocean_breeze_036_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/ocean_breeze/tn/es_ocean_breeze_036.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_ocean_breeze_036_gp ) {
    0,   1,  6,  7,
   89,   1, 99,111,
  153, 144,209,255,
  255,   0, 73, 82};

// Gradient palette "departure_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/mjf/tn/departure.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 88 bytes of program space.

DEFINE_GRADIENT_PALETTE( departure_gp ) {
    0,   8,  3,  0,
   42,  23,  7,  0,
   63,  75, 38,  6,
   84, 169, 99, 38,
  106, 213,169,119,
  116, 255,255,255,
  138, 135,255,138,
  148,  22,255, 24,
  170,   0,255,  0,
  191,   0,136,  0,
  212,   0, 55,  0,
  255,   0, 55,  0};

// Gradient palette "es_landscape_64_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/landscape/tn/es_landscape_64.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 36 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_landscape_64_gp ) {
    0,   0,  0,  0,
   37,   2, 25,  1,
   76,  15,115,  5,
  127,  79,213,  1,
  128, 126,211, 47,
  130, 188,209,247,
  153, 144,182,205,
  204,  59,117,250,
  255,   1, 37,192};

// Gradient palette "es_landscape_33_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/landscape/tn/es_landscape_33.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_landscape_33_gp ) {
    0,   1,  5,  0,
   19,  32, 23,  1,
   38, 161, 55,  1,
   63, 229,144,  1,
   66,  39,142, 74,
  255,   1,  4,  1};

// Gradient palette "rainbowsherbet_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ma/icecream/tn/rainbowsherbet.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( rainbowsherbet_gp ) {
    0, 255, 33,  4,
   43, 255, 68, 25,
   86, 255,  7, 25,
  127, 255, 82,103,
  170, 255,255,242,
  209,  42,255, 22,
  255,  87,255, 65};

// Gradient palette "gr65_hult_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/hult/tn/gr65_hult.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( gr65_hult_gp ) {
    0, 247,176,247,
   48, 255,136,255,
   89, 220, 29,226,
  160,   7, 82,178,
  216,   1,124,109,
  255,   1,124,109};

// Gradient palette "gr64_hult_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/hult/tn/gr64_hult.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE( gr64_hult_gp ) {
    0,   1,124,109,
   66,   1, 93, 79,
  104,  52, 65,  1,
  130, 115,127,  1,
  150,  52, 65,  1,
  201,   1, 86, 72,
  239,   0, 55, 45,
  255,   0, 55, 45};

// Gradient palette "GMT_drywet_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gmt/tn/GMT_drywet.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( GMT_drywet_gp ) {
    0,  47, 30,  2,
   42, 213,147, 24,
   84, 103,219, 52,
  127,   3,219,207,
  170,   1, 48,214,
  212,   1,  1,111,
  255,   1,  7, 33};

// Gradient palette "ib15_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ing/general/tn/ib15.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( ib15_gp ) {
    0, 113, 91,147,
   72, 157, 88, 78,
   89, 208, 85, 33,
  107, 255, 29, 11,
  141, 137, 31, 39,
  255,  59, 33, 89};

// Gradient palette "Fuschia_7_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds/fuschia/tn/Fuschia-7.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Fuschia_7_gp ) {
    0,  43,  3,153,
   63, 100,  4,103,
  127, 188,  5, 66,
  191, 161, 11,115,
  255, 135, 20,182};

// Gradient palette "es_emerald_dragon_08_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/emerald_dragon/tn/es_emerald_dragon_08.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_emerald_dragon_08_gp ) {
    0,  97,255,  1,
  101,  47,133,  1,
  178,  13, 43,  1,
  255,   2, 10,  1};

// Gradient palette "lava_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/neota/elem/tn/lava.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 52 bytes of program space.

DEFINE_GRADIENT_PALETTE( lava_gp ) {
    0,   0,  0,  0,
   46,  18,  0,  0,
   96, 113,  0,  0,
  108, 142,  3,  1,
  119, 175, 17,  1,
  146, 213, 44,  2,
  174, 255, 82,  4,
  188, 255,115,  4,
  202, 255,156,  4,
  218, 255,203,  4,
  234, 255,255,  4,
  244, 255,255, 71,
  255, 255,255,255};

// Gradient palette "fire_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/neota/elem/tn/fire.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( fire_gp ) {
    0,   1,  1,  0,
   76,  32,  5,  0,
  146, 192, 24,  0,
  197, 220,105,  5,
  240, 252,255, 31,
  250, 252,255,111,
  255, 255,255,255};

// Gradient palette "Colorfull_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Colorfull.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 44 bytes of program space.

DEFINE_GRADIENT_PALETTE( Colorfull_gp ) {
    0,  10, 85,  5,
   25,  29,109, 18,
   60,  59,138, 42,
   93,  83, 99, 52,
  106, 110, 66, 64,
  109, 123, 49, 65,
  113, 139, 35, 66,
  116, 192,117, 98,
  124, 255,255,137,
  168, 100,180,155,
  255,  22,121,174};

// Gradient palette "Magenta_Evening_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Magenta_Evening.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( Magenta_Evening_gp ) {
    0,  71, 27, 39,
   31, 130, 11, 51,
   63, 213,  2, 64,
   70, 232,  1, 66,
   76, 252,  1, 69,
  108, 123,  2, 51,
  255,  46,  9, 35};

// Gradient palette "Pink_Purple_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Pink_Purple.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 44 bytes of program space.

DEFINE_GRADIENT_PALETTE( Pink_Purple_gp ) {
    0,  19,  2, 39,
   25,  26,  4, 45,
   51,  33,  6, 52,
   76,  68, 62,125,
  102, 118,187,240,
  109, 163,215,247,
  114, 217,244,255,
  122, 159,149,221,
  149, 113, 78,188,
  183, 128, 57,155,
  255, 146, 40,123};

// Gradient palette "Sunset_Real_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Sunset_Real.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( Sunset_Real_gp ) {
    0, 120,  0,  0,
   22, 179, 22,  0,
   51, 255,104,  0,
   85, 167, 22, 18,
  135, 100,  0,103,
  198,  16,  0,130,
  255,   0,  0,160};

// Gradient palette "es_autumn_19_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/autumn/tn/es_autumn_19.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 52 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_autumn_19_gp ) {
    0,  26,  1,  1,
   51,  67,  4,  1,
   84, 118, 14,  1,
  104, 137,152, 52,
  112, 113, 65,  1,
  122, 133,149, 59,
  124, 137,152, 52,
  135, 113, 65,  1,
  142, 139,154, 46,
  163, 113, 13,  1,
  204,  55,  3,  1,
  249,  17,  1,  1,
  255,  17,  1,  1};

// Gradient palette "BlacK_Blue_Magenta_White_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/BlacK_Blue_Magenta_White.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( BlacK_Blue_Magenta_White_gp ) {
    0,   0,  0,  0,
   42,   0,  0, 45,
   84,   0,  0,255,
  127,  42,  0,255,
  170, 255,  0,255,
  212, 255, 55,255,
  255, 255,255,255};

// Gradient palette "BlacK_Magenta_Red_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/BlacK_Magenta_Red.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( BlacK_Magenta_Red_gp ) {
    0,   0,  0,  0,
   63,  42,  0, 45,
  127, 255,  0,255,
  191, 255,  0, 45,
  255, 255,  0,  0};

// Gradient palette "BlacK_Red_Magenta_Yellow_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/BlacK_Red_Magenta_Yellow.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( BlacK_Red_Magenta_Yellow_gp ) {
    0,   0,  0,  0,
   42,  42,  0,  0,
   84, 255,  0,  0,
  127, 255,  0, 45,
  170, 255,  0,255,
  212, 255, 55, 45,
  255, 255,255,  0};

// Gradient palette "Blue_Cyan_Yellow_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/Blue_Cyan_Yellow.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Blue_Cyan_Yellow_gp ) {
    0,   0,  0,255,
   63,   0, 55,255,
  127,   0,255,255,
  191,  42,255, 45,
  255, 255,255,  0};

  // Gradient palette "bhw1_06_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_06.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw1_06_gp ) {
    0, 184,  1,128,
  160,   1,193,182,
  219, 153,227,190,
  255, 255,255,255};

  // Gradient palette "bhw2_13_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw2/tn/bhw2_13.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw2_13_gp ) {
    0, 121,  0,  0,
   74, 173, 15,  1,
  132, 234, 70,  1,
  202,  38, 15,  1,
  255,   0,  0,  0};

// Gradient palette "bhw3_01_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw3/tn/bhw3_01.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 52 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw3_01_gp ) {
    0, 255,146,228,
   25, 152, 43, 65,
   48,  36, 17, 22,
   72,   8, 34, 75,
   81,   1, 58,170,
  104,  42, 49,245,
  124,  15, 15, 95,
  150,   1,  8, 39,
  175,  98, 32, 35,
  204, 123,  9,  2,
  219, 220, 15,  2,
  237, 255, 93,  6,
  255, 244,244,  0};

  // Gradient palette "bhw3_18_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw3/tn/bhw3_18.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 44 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw3_18_gp ) {
    0,   2,  5, 11,
   30,  12, 10, 87,
   48,  61,124,201,
   63,  10, 54,111,
   81,   1,  8, 68,
  117,  88, 84,247,
  145,   1, 12,  9,
  175,  61,130, 43,
  196,  31,146,  6,
  234,   4, 31, 10,
  255,   0,  1,  1};

// Gradient palette "Gummy_Bears_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds/icons/tn/Gummy-Bears.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Gummy_Bears_gp ) {
    0, 252, 91,  0,
   63, 222, 21,  1,
  127, 194,  1,  1,
  191,  35, 48,  2,
  255,   1,215, 10};
// Gradient palette "rainbow_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds9/tn/rainbow.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( rainbow_gp ) {
    0, 255,  0,255,
   51,   0,  0,255,
  102,   0,255,255,
  153,   0,255,  0,
  204, 255,255,  0,
  255, 255,  0,  0};




// Gradient palette "es_autumn_02_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/autumn/tn/es_autumn_02.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_autumn_02_gp ) {
    0,  86,  6,  1,
  127, 255,255,125,
  153, 255,255,125,
  242, 194, 96,  1,
  255, 194, 96,  1};

  // Gradient palette "es_autumn_10_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/autumn/tn/es_autumn_10.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_autumn_10_gp ) {
    0, 113,119,  6,
  127, 255,  5,  1,
  242, 113,119,  6,
  255, 113,119,  6};

  // Gradient palette "es_landscape_24_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/landscape/tn/es_landscape_24.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_landscape_24_gp ) {
    0,  27, 91,  0,
   38,  94,255,  0,
   63, 142,255, 21,
   68, 173,244,252,
  127,  10,164,156,
  255,   5, 68, 66};

// Gradient palette "es_ocean_breeze_028_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/ocean_breeze/tn/es_ocean_breeze_028.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_ocean_breeze_028_gp ) {
    0, 224,193,166,
   63,  16,104, 92,
  127,   1, 16, 22,
  255,  16,104, 92};

  // Gradient palette "es_ocean_breeze_046_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/ocean_breeze/tn/es_ocean_breeze_046.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_ocean_breeze_046_gp ) {
    0, 157,221,247,
   38,   0, 56,111,
   63,   1, 15, 49,
   66, 184,231,250,
  153,  22,119,184,
  255,   2, 45, 89};

  // Gradient palette "es_seadreams_10_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/sea_dreams/tn/es_seadreams_10.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_seadreams_10_gp ) {
    0,   3,  1,250,
   89, 109,223,255,
  108,  56,105,214,
  127,  22, 33,178,
  247,   3,  6,153,
  255,   3,  6,153};
// Gradient palette "calpan_15_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gacruxa/calpan/tn/calpan-15.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 64 bytes of program space.

DEFINE_GRADIENT_PALETTE( calpan_15_gp ) {
    0, 117,171,240,
    1,  13, 37, 48,
   24,  13, 37, 48,
   24, 239,241,245,
   49, 239,241,245,
   49,  13, 37, 48,
   76,  13, 37, 48,
   77, 117,171,240,
  176, 117,171,240,
  177,  13, 37, 48,
  202,  13, 37, 48,
  203, 239,241,245,
  228, 239,241,245,
  229,  13, 37, 48,
  253,  13, 37, 48,
  255, 117,171,240};

  // Gradient palette "Tropical_Colors_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ggr/tn/Tropical_Colors.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 116 bytes of program space.

DEFINE_GRADIENT_PALETTE( Tropical_Colors_gp ) {
    0,   1,  4,  1,
   14,   1, 10,  1,
   21,   1, 19,  0,
   35,   1, 42,  1,
   49,   3, 75,  1,
   59,  56,103,  1,
   70, 208,135,  4,
   84, 217, 54,  2,
   98, 224, 10,  1,
  130, 117, 15,  3,
  141,  48, 20,  6,
  155,  42, 18, 77,
  170,  36, 17,255,
  197,  55, 97,242,
  210,  80,255,228,
  220,  47,219, 77,
  225,  24,187, 10,
  228,  24,180,  9,
  230,  24,171,  8,
  232,  23,161,  6,
  235,  23,149,  5,
  237,  22,136,  4,
  240,  22,124,  2,
  242,  21,112,  1,
  245,  21,100,  1,
  247,  20, 88,  1,
  250,  19, 77,  1,
  252,  19, 66,  1,
  255,  18, 55,  0};

  // Gradient palette "gyr_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/grass/tn/gyr.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 12 bytes of program space.

DEFINE_GRADIENT_PALETTE( gyr_gp ) {
    0,   0,255,  0,
  127, 255,255,  0,
  255, 255,  0,  0};

// Gradient palette "gold_yellow_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/neota/clth/tn/gold-yellow.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( gold_yellow_gp ) {
    0,   0,  0,  0,
   94,  42, 29,  0,
  189, 255,135,  0,
  213, 255,189,  4,
  238, 255,255, 25,
  246, 255,255,103,
  255, 255,255,255};

  // Gradient palette "f_30_31_32_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pm/tn/f-30-31-32.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 256 bytes of program space.

DEFINE_GRADIENT_PALETTE( f_30_31_32_gp ) {
    0,   0,  0,  0,
    4,   0,  0,  1,
    8,   0,  0,  1,
   12,   0,  0,  4,
   16,   0,  0,  8,
   20,   0,  0, 14,
   24,   0,  0, 22,
   28,   0,  0, 33,
   32,   0,  0, 47,
   36,   0,  0, 63,
   40,   0,  0, 82,
   44,   0,  0,103,
   48,   0,  0,128,
   52,   0,  0,156,
   56,   0,  0,190,
   60,   0,  0,226,
   64,   1,  0,255,
   68,   1,  0,255,
   72,   1,  0,255,
   76,   2,  0,255,
   80,   4,  0,255,
   84,   7,  0,255,
   89,  12,  0,255,
   93,  18,  0,255,
   97,  24,  0,255,
  101,  33,  0,255,
  105,  44,  0,255,
  109,  55,  1,245,
  113,  69,  1,226,
  117,  86,  1,205,
  121, 103,  2,188,
  125, 123,  3,172,
  129, 146,  5,156,
  133, 169,  8,142,
  137, 197, 10,128,
  141, 224, 14,115,
  145, 255, 18,103,
  149, 255, 22, 92,
  153, 255, 27, 82,
  157, 255, 33, 71,
  161, 255, 40, 62,
  165, 255, 46, 53,
  170, 255, 54, 46,
  174, 255, 61, 39,
  178, 255, 70, 33,
  182, 255, 79, 27,
  186, 255, 88, 22,
  190, 255, 99, 18,
  194, 255,109, 14,
  198, 255,121, 11,
  202, 255,135,  8,
  206, 255,147,  5,
  210, 255,161,  3,
  214, 255,175,  2,
  218, 255,189,  1,
  222, 255,205,  1,
  226, 255,221,  1,
  230, 255,237,  1,
  234, 255,255,  1,
  238, 255,255,  5,
  242, 255,255, 26,
  246, 255,255, 72,
  250, 255,255,145,
  255, 255,255,255};

  // Gradient palette "bhw1_hello_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_hello.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw1_hello_gp ) {
    0, 237,156,197,
   35, 244,189,230,
   56, 255,255,255,
   79, 244,189,230,
  109, 237,156,197,
  160, 121,255,255,
  196, 255,255,255,
  255, 121,255,255};

  // Gradient palette "bhw3_34_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw3/tn/bhw3_34.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw3_34_gp ) {
    0,  29,112,205,
   48,  92,255,250,
   91,  52,223, 12,
  124,   4, 13, 21,
  183,   9,103, 15,
  216,  10, 80,  2,
  255,  38,255, 52};

  // Gradient palette "aips0_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds9/tn/aips0.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 72 bytes of program space.

DEFINE_GRADIENT_PALETTE( aips0_gp ) {
    0,   3,  7,  4,
   28,   3,  7,  4,
   28,  36,  0, 73,
   56,  36,  0, 73,
   56,   0,  0,138,
   84,   0,  0,138,
   84,  19,100,210,
  113,  19,100,210,
  113,   0, 81,  0,
  141,   0, 81,  0,
  141,   0,235,  0,
  170,   0,235,  0,
  170, 255,255,  0,
  198, 255,255,  0,
  198, 255,114,  0,
  226, 255,114,  0,
  226, 255,  0,  0,
  255, 255,  0,  0};

// Gradient palette "es_candide_29_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/candide/tn/es_candide_29.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_candide_29_gp ) {
    0, 227, 52,242,
  101, 199,108,250,
  153, 163,131,250,
  242, 117,205,240,
  255, 117,205,240};

  // Gradient palette "qual_dark_06_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ssz/tn/qual-dark-06.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 48 bytes of program space.

DEFINE_GRADIENT_PALETTE( qual_dark_06_gp ) {
    0,  16, 59,105,
   42,  16, 59,105,
   42, 142, 33, 51,
   84, 142, 33, 51,
   84, 199, 51, 32,
  127, 199, 51, 32,
  127, 192,161, 29,
  170, 192,161, 29,
  170,  58,133, 24,
  212,  58,133, 24,
  212,  17,133, 65,
  255,  17,133, 65};

  // Gradient palette "qual_light_06_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ssz/tn/qual-light-06.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 48 bytes of program space.

DEFINE_GRADIENT_PALETTE( qual_light_06_gp ) {
    0, 106,159,194,
   42, 106,159,194,
   42, 192,119,133,
   84, 192,119,133,
   84, 222,159,127,
  127, 222,159,127,
  127, 239,213, 92,
  170, 239,213, 92,
  170, 146,201,108,
  212, 146,201,108,
  212, 106,199,155,
  255, 106,199,155};

// Gradient palette "nunoftheabove_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/6/tn/nunoftheabove.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE( nunoftheabove_gp ) {
    0,   1,  1,  1,
   51,   1,  1,  1,
   56, 255,255,255,
   94, 255,255,255,
  101,   1,  1,  1,
  135,   1,  1,  1,
  153,  18,  7,230,
  255, 224, 10,  9};

// Gradient palette "Tertiary_01_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/vermillion/tn/Tertiary_01.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Tertiary_01_gp ) {
    0,   0,  1,255,
   63,   3, 68, 45,
  127,  23,255,  0,
  191, 100, 68,  1,
  255, 255,  1,  4};

  // Gradient palette "GMT_hot_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gmt/tn/GMT_hot.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( GMT_hot_gp ) {
    0,   0,  0,  0,
   95, 255,  0,  0,
  191, 255,255,  0,
  255, 255,255,255};

  // Gradient palette "l_o_v_e_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/colo/tvr/tn/l_o_v_e.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 40 bytes of program space.

DEFINE_GRADIENT_PALETTE( l_o_v_e_gp ) {
    0,  12,  1,  1,
   17,  12,  1,  1,
   17,  64,  1,  1,
   35,  64,  1,  1,
   35, 128,  1,  1,
   56, 128,  1,  1,
   56, 210, 32,  0,
   76, 210, 32,  0,
   76, 104, 95, 39,
  255, 104, 95, 39};

  // Gradient palette "garish14_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/jjg/dem/tn/garish14.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 112 bytes of program space.

DEFINE_GRADIENT_PALETTE( garish14_gp ) {
    0,   7,139,  6,
    2,   7,139,  6,
    2,  39,162,  9,
    4,  39,162,  9,
    4, 106,189, 12,
    6, 106,189, 12,
    6, 159,203,  5,
    8, 159,203,  5,
    8, 227,217,  1,
   12, 227,217,  1,
   12, 232,182,  1,
   17, 232,182,  1,
   17, 239,151,  1,
   28, 239,151,  1,
   28, 239,101,  1,
   42, 239,101,  1,
   42, 239, 61,  0,
   63, 239, 61,  0,
   63, 140, 29,  7,
   84, 140, 29,  7,
   84,  72,  9, 42,
  127,  72,  9, 42,
  127, 112, 39, 92,
  170, 112, 39, 92,
  170, 163, 93,164,
  212, 163, 93,164,
  212, 194,149,197,
  255, 194,149,197};

// Single array of defined cpt-city color palettes.
// This will let us programmatically choose one based on
// a number, rather than having to activate each explicitly
// by name every time.
// Since it is const, this array could also be moved
// into PROGMEM to save SRAM, but for simplicity of illustration
// we'll keep it in a regular SRAM array.
//
// This list of color palettes acts as a "playlist"; you can
// add or delete, or re-arrange as you wish.
const TProgmemRGBGradientPalettePtr gGradientPalettes[] = {

  qual_light_06_gp,
  Sunset_Real_gp,
  es_rivendell_15_gp,
  es_ocean_breeze_036_gp,
  rgi_15_gp,
  retro2_16_gp,
  Analogous_1_gp,
  es_pinksplash_08_gp,
  Coral_reef_gp,
  es_ocean_breeze_068_gp,
  es_pinksplash_07_gp,
  es_vintage_01_gp,
  departure_gp,
  es_landscape_64_gp,
  es_landscape_33_gp,
  rainbowsherbet_gp,
  gr65_hult_gp,
  gr64_hult_gp,
  GMT_drywet_gp,
  ib_jul01_gp,
  es_vintage_57_gp,
  ib15_gp,
  Fuschia_7_gp,
  lava_gp,
  fire_gp,
  Colorfull_gp,
  Pink_Purple_gp,
  es_autumn_19_gp,
  BlacK_Blue_Magenta_White_gp,
  BlacK_Magenta_Red_gp,
  BlacK_Red_Magenta_Yellow_gp,
  bhw1_06_gp,
  bhw2_13_gp,
  bhw3_01_gp,
  bhw3_18_gp,
  Gummy_Bears_gp,
  rainbow_gp,
  es_autumn_02_gp,
  es_autumn_10_gp,
  es_landscape_24_gp,
  es_ocean_breeze_046_gp,
  es_seadreams_10_gp,
  Tropical_Colors_gp,
  gold_yellow_gp,
  f_30_31_32_gp,
  bhw3_34_gp,
  aips0_gp,
  qual_dark_06_gp,
  nunoftheabove_gp,
  Tertiary_01_gp,
  GMT_hot_gp,
  l_o_v_e_gp,
  garish14_gp,
  Blue_Cyan_Yellow_gp };

// Count of how many cpt-city gradients are defined:
const uint8_t gGradientPaletteCount =
  sizeof( gGradientPalettes) / sizeof( TProgmemRGBGradientPalettePtr );

#endif /* PALETTES_H_ */
