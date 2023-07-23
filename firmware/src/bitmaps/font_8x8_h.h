/* ************************************************************************
 *
 *   monospaced 8x8 font based on ISO 8859-1
 *   horizontally aligned
 *
 *
 * ************************************************************************ */


/* ************************************************************************
 *   font data
 * ************************************************************************ */

#ifdef FONT_8X8_H


/* source management */
#define FONT_SET                   /* font set included */

/* font size */
#define FONT_SIZE_X          8     /* width:  8 dots */
#define FONT_SIZE_Y          8     /* height: 8 dots */

/* font data format */
#define FONT_BYTES_N         8     /* 8 bytes per character */
#define FONT_BYTES_X         1     /* 1 byte in x direction */
#define FONT_BYTES_Y         8     /* 8 bytes in y direction */


/*
 *  character bitmaps
 *  - to reduce size we place some symbols and special characters at
 *    positions 0-15, and we move the standard chars up in the list by
 *    16 positions (using ASCII's 0-31 for control chars)
 *  - format:
 *    - 8 bytes per character 
 *    - first byte: first horizontal line (top to down)
 *    - bit #0: right / bit #7: left
 */

const uint8_t FontData[] PROGMEM = {
  /* symbols and special characters */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* 0x00 n/a */
  0x46,0x66,0x76,0xFF,0x76,0x66,0x46,0x00,   /* 0x01 symbol: diode A-C */
  0x62,0x66,0x6E,0xFF,0x6E,0x66,0x62,0x00,   /* 0x02 symbol: diode C-A */
  0x66,0x66,0x66,0xE7,0x66,0x66,0x66,0x00,   /* 0x03 symbol: capacitor */
  0x00,0x7C,0xC6,0xC6,0x6C,0x28,0xEE,0x00,   /* 0x04 omega */
  0x00,0x6C,0x6C,0x6C,0x6C,0x76,0xC0,0x80,   /* 0x05 � (micro) */
  0x7F,0x40,0x40,0xC0,0x40,0x40,0x7F,0x00,   /* 0x06 symbol: resistor left side */
  0xFE,0x02,0x02,0x03,0x02,0x02,0xFE,0x00,   /* 0x07 symbol: resistor right side */

  0xBA,0x6C,0xC6,0xC6,0xFE,0xC6,0xC6,0x00,   /* 0x08 � */
  0xBA,0x6C,0xC6,0xC6,0xC6,0x6C,0x38,0x00,   /* 0x09 � */
  0xEE,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,   /* 0x0a � */
  0xFC,0xC6,0xC6,0xFC,0xC6,0xC6,0xFC,0xC0,   /* 0x0b � */
  0x84,0x78,0x0C,0x7C,0xCC,0xCC,0x7A,0x00,   /* 0x0c � */
  0x44,0x38,0x6C,0xC6,0xC6,0x6C,0x38,0x00,   /* 0x0d � */
  0x28,0xC6,0xC6,0xC6,0xC6,0xCE,0x76,0x00,   /* 0x0e � */
  0x10,0x28,0x10,0x00,0x00,0x00,0x00,0x00,   /* 0x0f � (degree) */

  /* standard characters */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* 0x10 space */
  0x30,0x78,0x78,0x30,0x00,0x30,0x30,0x00,   /* 0x11 ! */
  0x66,0x66,0x22,0x44,0x00,0x00,0x00,0x00,   /* 0x12 " */
  0x6C,0xFE,0xFE,0x6C,0xFE,0xFE,0x6C,0x00,   /* 0x13 # */
  0x10,0x7C,0xC0,0x7C,0x06,0x7C,0x10,0x00,   /* 0x14 $ */
  0xC6,0xCE,0x1C,0x38,0x70,0xE6,0xC6,0x00,   /* 0x15 % */
  0x78,0xCC,0xC0,0x7E,0xD8,0xDC,0x76,0x00,   /* 0x16 & */
  0x30,0x30,0x20,0x10,0x00,0x00,0x00,0x00,   /* 0x17 � */
  0x0C,0x18,0x30,0x30,0x30,0x18,0x0C,0x00,   /* 0x18 ( */
  0x30,0x18,0x0C,0x0C,0x0C,0x18,0x30,0x00,   /* 0x19 ) */
  0x5A,0x3C,0x5A,0x3C,0x5A,0x00,0x00,0x00,   /* 0x1a * */
  0x00,0x18,0x18,0x7E,0x7E,0x18,0x18,0x00,   /* 0x1b + */
  0x00,0x00,0x00,0x00,0x30,0x30,0x10,0x20,   /* 0x1c , */
  0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,   /* 0x1d - */
  0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,   /* 0x1e . */
  0x06,0x0E,0x1C,0x38,0x70,0xE0,0xC0,0x00,   /* 0x1f / */
  0x38,0x6C,0xC6,0xC6,0xC6,0x6C,0x38,0x00,   /* 0x20 0 */
  0x30,0x70,0x30,0x30,0x30,0x30,0x78,0x00,   /* 0x21 1 */
  0x7C,0xC6,0x06,0x1C,0x70,0xC0,0xFE,0x00,   /* 0x22 2 */
  0x7C,0xC6,0x06,0x18,0x06,0xC6,0x7C,0x00,   /* 0x23 3 */
  0x1C,0x3C,0x6C,0xCC,0xFE,0x0C,0x0C,0x00,   /* 0x24 4 */
  0xFC,0xC0,0xFC,0x06,0x06,0xC6,0x7C,0x00,   /* 0x25 5 */
  0x3C,0x60,0xC0,0xFC,0xC6,0xC6,0x7C,0x00,   /* 0x26 6 */
  0xFE,0xC6,0x0C,0x18,0x30,0x30,0x30,0x00,   /* 0x27 7 */
  0x7C,0xC6,0xC6,0x7C,0xC6,0xC6,0x7C,0x00,   /* 0x28 8 */
  0x7C,0xC6,0xC6,0x7E,0x06,0x0C,0x78,0x00,   /* 0x29 9 */
  0x00,0x18,0x18,0x00,0x00,0x18,0x18,0x00,   /* 0x2a : */
  0x00,0x18,0x18,0x00,0x00,0x18,0x08,0x10,   /* 0x2b ; */
  0x08,0x18,0x30,0x60,0x30,0x18,0x08,0x00,   /* 0x2c < */
  0x00,0xFE,0xFE,0x00,0xFE,0xFE,0x00,0x00,   /* 0x2d = */
  0x60,0x30,0x18,0x0C,0x18,0x30,0x60,0x00,   /* 0x2e > */
  0x78,0xCC,0x1C,0x30,0x00,0x30,0x30,0x00,   /* 0x2f ? */
  0x7C,0xC6,0xBA,0xAE,0xB8,0xC6,0x7C,0x00,   /* 0x30 @ */
  0x38,0x6C,0xC6,0xC6,0xFE,0xC6,0xC6,0x00,   /* 0x31 A */
  0xFC,0xC6,0xC6,0xFC,0xC6,0xC6,0xFC,0x00,   /* 0x32 B */
  0x3C,0x66,0xC0,0xC0,0xC0,0x66,0x3C,0x00,   /* 0x33 C */
  0xF8,0xCC,0xC6,0xC6,0xC6,0xCC,0xF8,0x00,   /* 0x34 D */
  0xFE,0xC0,0xC0,0xFC,0xC0,0xC0,0xFE,0x00,   /* 0x35 E */
  0xFE,0xC0,0xC0,0xFC,0xC0,0xC0,0xC0,0x00,   /* 0x36 F */
  0x3E,0x60,0xC0,0xCE,0xC6,0x66,0x3E,0x00,   /* 0x37 G */
  0xC6,0xC6,0xC6,0xFE,0xC6,0xC6,0xC6,0x00,   /* 0x38 H */
  0x3C,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,   /* 0x39 I */
  0x06,0x06,0x06,0x06,0xC6,0xC6,0x7C,0x00,   /* 0x3a J */
  0xC6,0xCC,0xD8,0xF0,0xF8,0xDC,0xC6,0x00,   /* 0x3b K */
  0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFE,0x00,   /* 0x3c L */
  0xC6,0xEE,0xFE,0xFE,0xD6,0xC6,0xC6,0x00,   /* 0x3d M */
  0xC6,0xE6,0xF6,0xFE,0xDE,0xCE,0xC6,0x00,   /* 0x3e N */
  0x38,0x6C,0xC6,0xC6,0xC6,0x6C,0x38,0x00,   /* 0x3f O */
  0xFC,0xC6,0xC6,0xC6,0xFC,0xC0,0xC0,0x00,   /* 0x40 P */
  0x7C,0xC6,0xC6,0xC6,0xDE,0xCC,0x7A,0x00,   /* 0x41 Q */
  0xFC,0xC6,0xC6,0xFC,0xD8,0xCC,0xC6,0x00,   /* 0x42 R */
  0x7C,0xC6,0xC0,0x7C,0x06,0xC6,0x7C,0x00,   /* 0x43 S */
  0x7E,0x18,0x18,0x18,0x18,0x18,0x18,0x00,   /* 0x44 T */
  0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,   /* 0x45 U */
  0xC6,0xC6,0xC6,0xEE,0x7C,0x38,0x10,0x00,   /* 0x46 V */
  0xC6,0xC6,0xC6,0xD6,0xD6,0xD6,0x6C,0x00,   /* 0x47 W */
  0xC6,0xEE,0x7C,0x38,0x7C,0xEE,0xC6,0x00,   /* 0x48 X */
  0x66,0x66,0x66,0x3C,0x18,0x18,0x18,0x00,   /* 0x49 Y */
  0xFE,0x0E,0x1C,0x38,0x70,0xE0,0xFE,0x00,   /* 0x4a Z */
  0x78,0x60,0x60,0x60,0x60,0x60,0x78,0x00,   /* 0x4b [ */
  0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x06,0x00,   /* 0x4c \ */
  0x78,0x18,0x18,0x18,0x18,0x18,0x78,0x00,   /* 0x4d ] */
  0x10,0x38,0x6C,0xC6,0x00,0x00,0x00,0x00,   /* 0x4e ^ */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,   /* 0x4f _ */
  0x30,0x30,0x20,0x10,0x00,0x00,0x00,0x00,   /* 0x50 ` */
  0x00,0x78,0x0C,0x7C,0xCC,0xCC,0x7A,0x00,   /* 0x51 a */
  0xC0,0xDC,0xE6,0xC6,0xC6,0xCE,0xFC,0x00,   /* 0x52 b */
  0x00,0x3C,0x66,0xC0,0xC0,0x66,0x3C,0x00,   /* 0x53 c */
  0x06,0x76,0xCE,0xC6,0xC6,0xC6,0x7E,0x00,   /* 0x54 d */
  0x00,0x7C,0xC6,0xFE,0xC0,0xC6,0x7C,0x00,   /* 0x55 e */
  0x18,0x34,0x30,0x7C,0x30,0x30,0x30,0x00,   /* 0x56 f */
  0x00,0x7C,0xC6,0xC6,0xCE,0x76,0x06,0x3C,   /* 0x57 g */
  0xC0,0xDC,0xE6,0xC6,0xC6,0xC6,0xC6,0x00,   /* 0x58 h */
  0x18,0x18,0x00,0x38,0x18,0x18,0x3C,0x00,   /* 0x59 i */
  0x0C,0x0C,0x00,0x1C,0x0C,0x0C,0x6C,0x38,   /* 0x5a j */
  0x60,0x66,0x6C,0x70,0x68,0x6C,0x66,0x00,   /* 0x5b k */
  0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x00,   /* 0x5c l */
  0x00,0xF4,0xDE,0xD6,0xD6,0xD6,0xD6,0x00,   /* 0x5d m */
  0x00,0xD8,0xEC,0xC6,0xC6,0xC6,0xC6,0x00,   /* 0x5e n */
  0x00,0x38,0x6C,0xC6,0xC6,0x6C,0x38,0x00,   /* 0x5f o */
  0x00,0xFC,0xC6,0xC6,0xC6,0xE6,0xDC,0xC0,   /* 0x60 p */
  0x00,0x3F,0x63,0x63,0x63,0x67,0x3B,0x03,   /* 0x61 q */
  0x00,0xDC,0xE6,0xC6,0xC0,0xC0,0xC0,0x00,   /* 0x62 r */
  0x00,0x7C,0xC0,0x7C,0x06,0xC6,0x7C,0x00,   /* 0x63 s */
  0x30,0x30,0xFC,0x30,0x30,0x36,0x1C,0x00,   /* 0x64 t */
  0x00,0xC6,0xC6,0xC6,0xC6,0xCE,0x76,0x00,   /* 0x65 u */
  0x00,0xC6,0xC6,0xC6,0x6C,0x38,0x10,0x00,   /* 0x66 v */
  0x00,0xC6,0xC6,0xC6,0xD6,0xD6,0x6C,0x00,   /* 0x67 w */
  0x00,0xC6,0x6C,0x38,0x6C,0xC6,0xC6,0x00,   /* 0x68 x */
  0x00,0xC6,0xC6,0xC6,0xCE,0x76,0x06,0x3C,   /* 0x69 y */
  0x00,0xFC,0x0C,0x18,0x30,0x60,0xFC,0x00,   /* 0x6a z */
  0x38,0x60,0x60,0xC0,0x60,0x60,0x38,0x00,   /* 0x6b { */
  0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,   /* 0x6c | */
  0x38,0x0C,0x0C,0x06,0x0C,0x0C,0x38,0x00,   /* 0x6d } */
  0x10,0x18,0xFC,0xFE,0xFC,0x18,0x10,0x00    /* 0x6e ~ */
};


/*
 *  font lookup table for ISO 8859-1
 *  - 8 bit ISO 8859-1 to custom font
 *  - ff: no bitmap available
 */

const uint8_t FontTable[] PROGMEM = {
  0xff,        /* 0x00 -> n/a */
  0x01,        /* 0x01 -> symbol: diode A-C */
  0x02,        /* 0x02 -> symbol: diode C-A */
  0x03,        /* 0x03 -> symbol: capacitor */
  0x04,        /* 0x04 -> omega */
  0x05,        /* 0x05 -> � (micro) */
  0x06,        /* 0x06 -> symbol: resistor left side */
  0x07,        /* 0x07 -> symbol: resistor right side */
  0xff,        /* 0x08 -> n/a */
  0xff,        /* 0x09 -> n/a */
  0xff,        /* 0x0a -> n/a */
  0xff,        /* 0x0b -> n/a */
  0xff,        /* 0x0c -> n/a */
  0xff,        /* 0x0d -> n/a */
  0xff,        /* 0x0e -> n/a */
  0xff,        /* 0x0f -> n/a */

  0xff,        /* 0x10 -> n/a */
  0xff,        /* 0x11 -> n/a */
  0xff,        /* 0x12 -> n/a */
  0xff,        /* 0x13 -> n/a */
  0xff,        /* 0x14 -> n/a */
  0xff,        /* 0x15 -> n/a */
  0xff,        /* 0x16 -> n/a */
  0xff,        /* 0x17 -> n/a */
  0xff,        /* 0x18 -> n/a */
  0xff,        /* 0x19 -> n/a */
  0xff,        /* 0x1a -> n/a */
  0xff,        /* 0x1b -> n/a */
  0xff,        /* 0x1c -> n/a */
  0xff,        /* 0x1d -> n/a */
  0xff,        /* 0x1e -> n/a */
  0xff,        /* 0x1f -> n/a */

  0x10,        /* 0x20 -> space */
  0x11,        /* 0x21 -> ! */
  0x12,        /* 0x22 -> " */
  0x13,        /* 0x23 -> # */
  0x14,        /* 0x24 -> $ */
  0x15,        /* 0x25 -> % */
  0x16,        /* 0x26 -> & */
  0x17,        /* 0x27 -> � */
  0x18,        /* 0x28 -> ( */
  0x19,        /* 0x29 -> ) */
  0x1a,        /* 0x2a -> * */
  0x1b,        /* 0x2b -> + */
  0x1c,        /* 0x2c -> , */
  0x1d,        /* 0x2d -> - */
  0x1e,        /* 0x2e -> . */
  0x1f,        /* 0x2f -> / */

  0x20,        /* 0x30 -> 0 */
  0x21,        /* 0x31 -> 1 */
  0x22,        /* 0x32 -> 2 */
  0x23,        /* 0x33 -> 3 */
  0x24,        /* 0x34 -> 4 */
  0x25,        /* 0x35 -> 5 */
  0x26,        /* 0x36 -> 6 */
  0x27,        /* 0x37 -> 7 */
  0x28,        /* 0x38 -> 8 */
  0x29,        /* 0x39 -> 9 */
  0x2a,        /* 0x3a -> : */
  0x2b,        /* 0x3b -> ; */
  0x2c,        /* 0x3c -> < */
  0x2d,        /* 0x3d -> = */
  0x2e,        /* 0x3e -> > */
  0x2f,        /* 0x3f -> ? */

  0x30,        /* 0x40 -> @ */
  0x31,        /* 0x41 -> A */
  0x32,        /* 0x42 -> B */
  0x33,        /* 0x43 -> C */
  0x34,        /* 0x44 -> D */
  0x35,        /* 0x45 -> E */
  0x36,        /* 0x46 -> F */
  0x37,        /* 0x47 -> G */
  0x38,        /* 0x48 -> H */
  0x39,        /* 0x49 -> I */
  0x3a,        /* 0x4a -> J */
  0x3b,        /* 0x4b -> K */
  0x3c,        /* 0x4c -> L */
  0x3d,        /* 0x4d -> M */
  0x3e,        /* 0x4e -> N */
  0x3f,        /* 0x4f -> O */

  0x40,        /* 0x50 -> P */
  0x41,        /* 0x51 -> Q */
  0x42,        /* 0x52 -> R */
  0x43,        /* 0x53 -> S */
  0x44,        /* 0x54 -> T */
  0x45,        /* 0x55 -> U */
  0x46,        /* 0x56 -> V */
  0x47,        /* 0x57 -> W */
  0x48,        /* 0x58 -> X */
  0x49,        /* 0x59 -> Y */
  0x4a,        /* 0x5a -> Z */
  0x4b,        /* 0x5b -> [ */
  0x4c,        /* 0x5c -> \ */
  0x4d,        /* 0x5d -> ] */
  0x4e,        /* 0x5e -> ^ */
  0x4f,        /* 0x5f -> _ */

  0x50,        /* 0x60 -> ` */
  0x51,        /* 0x61 -> a */
  0x52,        /* 0x62 -> b */
  0x53,        /* 0x63 -> c */
  0x54,        /* 0x64 -> d */
  0x55,        /* 0x65 -> e */
  0x56,        /* 0x66 -> f */
  0x57,        /* 0x67 -> g */
  0x58,        /* 0x68 -> h */
  0x59,        /* 0x69 -> i */
  0x5a,        /* 0x6a -> j */
  0x5b,        /* 0x6b -> k */
  0x5c,        /* 0x6c -> l */
  0x5d,        /* 0x6d -> m */
  0x5e,        /* 0x6e -> n */
  0x5f,        /* 0x6f -> o */

  0x60,        /* 0x70 -> p */
  0x61,        /* 0x71 -> q */
  0x62,        /* 0x72 -> r */
  0x63,        /* 0x73 -> s */
  0x64,        /* 0x74 -> t */
  0x65,        /* 0x75 -> u */
  0x66,        /* 0x76 -> v */
  0x67,        /* 0x77 -> w */
  0x68,        /* 0x78 -> x */
  0x69,        /* 0x79 -> y */
  0x6a,        /* 0x7a -> z */
  0x6b,        /* 0x7b -> { */
  0x6c,        /* 0x7c -> | */
  0x6d,        /* 0x7d -> } */
  0x6e,        /* 0x7e -> ~ */
  0xff,        /* 0x7f -> n/a */

  0xff,        /* 0x80 -> n/a */
  0xff,        /* 0x81 -> n/a */
  0xff,        /* 0x82 -> n/a */
  0xff,        /* 0x83 -> n/a */
  0xff,        /* 0x84 -> n/a */
  0xff,        /* 0x85 -> n/a */
  0xff,        /* 0x86 -> n/a */
  0xff,        /* 0x87 -> n/a */
  0xff,        /* 0x88 -> n/a */
  0xff,        /* 0x89 -> n/a */
  0xff,        /* 0x8a -> n/a */
  0xff,        /* 0x8b -> n/a */
  0xff,        /* 0x8c -> n/a */
  0xff,        /* 0x8d -> n/a */
  0xff,        /* 0x8e -> n/a */
  0xff,        /* 0x8f -> n/a */

  0xff,        /* 0x90 -> n/a */
  0xff,        /* 0x91 -> n/a */
  0xff,        /* 0x92 -> n/a */
  0xff,        /* 0x93 -> n/a */
  0xff,        /* 0x94 -> n/a */
  0xff,        /* 0x95 -> n/a */
  0xff,        /* 0x96 -> n/a */
  0xff,        /* 0x97 -> n/a */
  0xff,        /* 0x98 -> n/a */
  0xff,        /* 0x99 -> n/a */
  0xff,        /* 0x9a -> n/a */
  0xff,        /* 0x9b -> n/a */
  0xff,        /* 0x9c -> n/a */
  0xff,        /* 0x9d -> n/a */
  0xff,        /* 0x9e -> n/a */
  0xff,        /* 0x9f -> n/a */

  0xff,        /* 0xa0 -> n/a */
  0xff,        /* 0xa1 -> n/a */
  0xff,        /* 0xa2 -> n/a */
  0xff,        /* 0xa3 -> n/a */
  0xff,        /* 0xa4 -> n/a */
  0xff,        /* 0xa5 -> n/a */
  0xff,        /* 0xa6 -> n/a */
  0xff,        /* 0xa7 -> n/a */
  0xff,        /* 0xa8 -> n/a */
  0xff,        /* 0xa9 -> n/a */
  0xff,        /* 0xaa -> n/a */
  0xff,        /* 0xab -> n/a */
  0xff,        /* 0xac -> n/a */
  0xff,        /* 0xad -> n/a */
  0xff,        /* 0xae -> n/a */
  0xff,        /* 0xaf -> n/a */

  0x0f,        /* 0xb0 -> � (degree) */
  0xff,        /* 0xb1 -> n/a */
  0xff,        /* 0xb2 -> n/a */
  0xff,        /* 0xb3 -> n/a */
  0xff,        /* 0xb4 -> n/a */
  0x05,        /* 0xb5 -> � (micro) */
  0xff,        /* 0xb6 -> n/a */
  0xff,        /* 0xb7 -> n/a */
  0xff,        /* 0xb8 -> n/a */
  0xff,        /* 0xb9 -> n/a */
  0xff,        /* 0xba -> n/a */
  0xff,        /* 0xbb -> n/a */
  0xff,        /* 0xbc -> n/a */
  0xff,        /* 0xbd -> n/a */
  0xff,        /* 0xbe -> n/a */
  0xff,        /* 0xbf -> n/a */

  0xff,        /* 0xc0 -> n/a */
  0xff,        /* 0xc1 -> n/a */
  0xff,        /* 0xc2 -> n/a */
  0xff,        /* 0xc3 -> n/a */
  0x08,        /* 0xc4 -> � */
  0xff,        /* 0xc5 -> n/a */
  0xff,        /* 0xc6 -> n/a */
  0xff,        /* 0xc7 -> n/a */
  0xff,        /* 0xc8 -> n/a */
  0xff,        /* 0xc9 -> n/a */
  0xff,        /* 0xca -> n/a */
  0xff,        /* 0xcb -> n/a */
  0xff,        /* 0xcc -> n/a */
  0xff,        /* 0xcd -> n/a */
  0xff,        /* 0xce -> n/a */
  0xff,        /* 0xcf -> n/a */

  0xff,        /* 0xd0 -> n/a */
  0xff,        /* 0xd1 -> n/a */
  0xff,        /* 0xd2 -> n/a */
  0xff,        /* 0xd3 -> n/a */
  0xff,        /* 0xd4 -> n/a */
  0xff,        /* 0xd5 -> n/a */
  0x09,        /* 0xd6 -> � */
  0xff,        /* 0xd7 -> n/a */
  0xff,        /* 0xd8 -> n/a */
  0xff,        /* 0xd9 -> n/a */
  0xff,        /* 0xda -> n/a */
  0xff,        /* 0xdb -> n/a */
  0x0a,        /* 0xdc -> � */
  0xff,        /* 0xdd -> n/a */
  0xff,        /* 0xde -> n/a */
  0x0b,        /* 0xdf -> � */

  0xff,        /* 0xe0 -> n/a */
  0xff,        /* 0xe1 -> n/a */
  0xff,        /* 0xe2 -> n/a */
  0xff,        /* 0xe3 -> n/a */
  0x0c,        /* 0xe4 -> � */
  0xff,        /* 0xe5 -> n/a */
  0xff,        /* 0xe6 -> n/a */
  0xff,        /* 0xe7 -> n/a */
  0xff,        /* 0xe8 -> n/a */
  0xff,        /* 0xe9 -> n/a */
  0xff,        /* 0xea -> n/a */
  0xff,        /* 0xeb -> n/a */
  0xff,        /* 0xec -> n/a */
  0xff,        /* 0xed -> n/a */
  0xff,        /* 0xee -> n/a */
  0xff,        /* 0xef -> n/a */

  0xff,        /* 0xf0 -> n/a */
  0xff,        /* 0xf1 -> n/a */
  0xff,        /* 0xf2 -> n/a */
  0xff,        /* 0xf3 -> n/a */
  0xff,        /* 0xf4 -> n/a */
  0xff,        /* 0xf5 -> n/a */
  0x0d,        /* 0xf6 -> � */
  0xff,        /* 0xf7 -> n/a */
  0xff,        /* 0xf8 -> n/a */
  0xff,        /* 0xf9 -> n/a */
  0xff,        /* 0xfa -> n/a */
  0xff,        /* 0xfb -> n/a */
  0x0e,        /* 0xfc -> � */
  0xff,        /* 0xfd -> n/a */
  0xff,        /* 0xfe -> n/a */
  0xff         /* 0xff -> n/a */
};


#endif

/* ************************************************************************
 *   EOF
 * ************************************************************************ */
