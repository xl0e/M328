/* ************************************************************************
 *
 *   ATmega 328 specific global configuration, setup and settings
 *
 *
 * ************************************************************************ */


/* source management */
#define CONFIG_328_H



/* ************************************************************************
 *   display module
 * ************************************************************************ */


/*
 *  display module / controller
 *
 *  Please uncomment the package matching your LCD/OLED module and adjust
 *  settings. And comment out the default package if not used.
 *
 *  To uncomment, remove the enclosing "#if 0" and "#endif" or put
 *  a "//" in front of both. To comment out, remove the "//" in front
 *  of the "#if 0" and "#endif".
 *
 *  Individual settings can be enabled by removing the leading "//", or
 *  disabled by placing a "//" in front of the setting.
 */



/*
 *  ST7735
 *  - 4 wire SPI interface using bit-bang SPI
 */

#if 1
#define LCD_ST7735                      /* display controller ST7735 */
#define LCD_GRAPHIC                     /* graphic display */
#define LCD_COLOR                       /* color display */
#define LCD_SPI                         /* SPI interface */
/* control and data lines */
#define LCD_PORT         PORTD          /* port data register */
#define LCD_DDR          DDRD           /* port data direction register */
#define LCD_RES          PD0            /* port pin used for /RESX (optional) */
#define LCD_CS           PD3            /* port pin used for /CSX (optional) */
#define LCD_DC           PD1            /* port pin used for D/CX */
#define LCD_SCL          PD5            /* port pin used for SCL */
#define LCD_SDA          PD2            /* port pin used for SDA */
/* display settings */
#define LCD_DOTS_X       128            /* number of horizontal dots */
#define LCD_DOTS_Y       160            /* number of vertical dots */
// #define LCD_OFFSET_X     4               /* enable x offset of 2 or 4 dots */
// #define LCD_OFFSET_Y     2               /* enable y offset of 1 or 2 dots */
#define LCD_FLIP_X                      /* enable horizontal flip */
// #define LCD_FLIP_Y                      /* enable vertical flip */
#define LCD_ROTATE                      /* switch X and Y (rotate by 90�) */
//#define LCD_BGR                         /* reverse red and blue color channels */
// #define LCD_LATE_ON                     /* turn on LCD after clearing it */
/* font and symbols: horizontally aligned & flipped */
#define FONT_10X16_HF                   /* 10x16 font */
// #define FONT_8X8_HF                     /* 10x16 font */
//#define FONT_6X8_ISO8859_2_HF           /* 6x8 Central European font */
//#define FONT_8X8_ISO8859_2_HF           /* 8x8 Central European font */
// #define FONT_10X16_ISO8859_2_HF         /* 10x16 Central European font */
//#define FONT_8X16_WIN1251_HF            /* 8x16 cyrillic font */
//#define FONT_8X16ALT_WIN1251_HF         /* 8x16 alternative cyrillic font */
// #define SYMBOLS_30X32_HF                /* 30x32 symbols */
#define SYMBOLS_24X24_HF
/* SPI bus */
#define SPI_BITBANG                     /* bit-bang SPI */
#define SPI_PORT         LCD_PORT       /* SPI port data register */
#define SPI_DDR          LCD_DDR        /* SPI port data direction register */
#define SPI_SCK          LCD_SCL        /* port pin used for SCK */
#define SPI_MOSI         LCD_SDA        /* port pin used for MOSI */

#endif



/*
 *  check if a LCD module is specified
 */

#if !defined(LCD_TEXT) && !defined(LCD_GRAPHIC)
  #error <<< No LCD module specified! >>>
#endif



/* ************************************************************************
 *   port and pin assignments
 * ************************************************************************ */


/*
 *  test pins / probes:
 *  - Must be an ADC port
 *  - Lower 3 pins of the port must be used for probes.
 *  - Please don't change the definitions of TP1, TP2 and TP3!
 *  - Don't share this port with POWER_CTRL or TEST_BUTTON!
 */

#define ADC_PORT         PORTC     /* port data register */
#define ADC_DDR          DDRC      /* port data direction register */
#define ADC_PIN          PINC      /* port input pins register */
#define TP1              PC0       /* test pin / probe #1 */
#define TP2              PC1       /* test pin / probe #2 */
#define TP3              PC2       /* test pin / probe #3 */

#define TP_ZENER         PC3       /* test pin for 10:1 voltage divider */
#define TP_REF           PC4       /* test pin for 2.5V reference and relay */
#define TP_BAT           PC5       /* test pin for battery (4:1 voltage divider) */


/*
 *  probe resistors
 *  - For PWM/squarewave output via probe #2 R_RL_2 has to be PB2/OC1B.
 *  - Don't share this port with POWER_CTRL or TEST_BUTTON!
 */

#define R_PORT           PORTB     /* port data register */
#define R_DDR            DDRB      /* port data direction register */
#define R_RL_1           PB0       /* Rl (680R) for test pin #1 */
#define R_RH_1           PB1       /* Rh (470k) for test pin #1 */
#define R_RL_2           PB2       /* Rl (680R) for test pin #2 */
#define R_RH_2           PB3       /* Rh (470k) for test pin #2 */
#define R_RL_3           PB4       /* Rl (680R) for test pin #3 */
#define R_RH_3           PB5       /* Rh (470k) for test pin #3 */


/*
 *  dedicated signal output via OC1B
 *  - don't change this!
 */

#define SIGNAL_PORT      PORTB     /* port data register */
#define SIGNAL_DDR       DDRB      /* port data direction register */
#define SIGNAL_OUT       PC1       /* MCU's OC1B pin */


/*
 *  power control
 *  - can't be same port as ADC_PORT or R_PORT
 */

#define POWER_PORT       PORTD     /* port data register */
#define POWER_DDR        DDRD      /* port data direction register */
#define POWER_CTRL       PD6       /* control pin (1: on / 0: off) */


/*
 *  test push button 
 *  - can't be same port as ADC_PORT or R_PORT
 */

#define BUTTON_PORT      PORTD     /* port data register */
#define BUTTON_DDR       DDRD      /* port data direction register */
#define BUTTON_PIN       PIND      /* port input pins register */
#define TEST_BUTTON      PD7       /* test/start push button (low active) */


/*
 *  rotary encoder
 */

#define ENCODER_PORT     PORTD     /* port data register */
#define ENCODER_DDR      DDRD      /* port data direction register */
#define ENCODER_PIN      PIND      /* port input pins register */
#define ENCODER_A        PD2       /* rotary encoder A signal */
#define ENCODER_B        PD1       /* rotary encoder B signal */


/*
 *  increase/decrease push buttons
 */

#define KEY_PORT         PORTD     /* port data register */
#define KEY_DDR          DDRD      /* port data direction register */
#define KEY_PIN          PIND      /* port input pins register */
#define KEY_INC          PD2       /* increase push button (low active) */
#define KEY_DEC          PD3       /* decrease push button (low active) */


/*
 *  frequency counter
 *  - input must be pin PD4/T0
 */

#define COUNTER_PORT     PORTD     /* port data register */
#define COUNTER_DDR      DDRD      /* port data direction register */
#define COUNTER_IN       PD4       /* signal input T0 */


/*
 *  IR detector/decoder
 *  - fixed module connected to dedicated I/O pin
 */

#define IR_PORT          PORTC     /* port data register */
#define IR_DDR           DDRC      /* port data direction register */
#define IR_PIN           PINC      /* port input pins register */
#define IR_DATA          PC6       /* data signal */


/*
 *  SPI
 *  - hardware SPI uses
 *    SCK PB5, MOSI PB3, MISO PB4 and /SS PB2
 *  - could be already set in display section
 *  - unused signals can be ignored
 *  - /SS is set to output mode for hardware SPI but not used
 */

/* for bit-bang and hardware SPI */
#ifndef SPI_PORT
#define SPI_PORT         PORTB     /* port data register */
#define SPI_DDR          DDRB      /* port data direction register */
#define SPI_PIN          PINB      /* port input pins register */
#define SPI_SCK          PB5       /* pin for SCK */
#define SPI_MOSI         PB3       /* pin for MOSI */
#define SPI_MISO         PB4       /* pin for MISO */
#define SPI_SS           PB2       /* pin for /SS */
#endif


/*
 *  I2C
 *  - hardware I2C (TWI) uses
 *    SDA PC4 and SCL PC5
 *  - could be already set in display section
 */

/* for bit-bang I2C */
#ifndef I2C_PORT
#define I2C_PORT         PORTC     /* port data register */
#define I2C_DDR          DDRC      /* port data direction register */
#define I2C_PIN          PINC      /* port input pins register */
#define I2C_SDA          PC4       /* pin for SDA */
#define I2C_SCL          PC5       /* pin for SCL */
#endif


/*
 *  TTL serial interface
 *  - hardware USART uses
 *    USART0: Rx PD0 and Tx PD1
 */

/* for hardware RS232 */
#define SERIAL_USART     -1         /* use USART0 */
/* for bit-bang RS232 */
#define SERIAL_PORT      PORTD     /* port data register */
#define SERIAL_DDR       DDRD      /* port data direction register */
#define SERIAL_PIN       PIND      /* port input pins register */
#define SERIAL_TX        PD1       /* pin for Tx (transmit) */
#define SERIAL_RX        PD0       /* pin for Rx (receive) */
#define SERIAL_PCINT     16        /* PCINT# for Rx pin */


/*
 *  OneWire
 *  - dedicated I/O pin
 */

#define ONEWIRE_PORT     PORTC     /* port data register */
#define ONEWIRE_DDR      DDRC      /* port data direction register */
#define ONEWIRE_PIN      PINC      /* port input pins register */
#define ONEWIRE_DQ       PC6       /* DQ (data line) */



/* ************************************************************************
 *   internal stuff
 * ************************************************************************ */


/* ADC reference selection: AVcc */
#define ADC_REF_VCC           (1 << REFS0)

/* ADC reference selection: internal 1.1V bandgap */
#define ADC_REF_BANDGAP       ((1 << REFS1) | (1 << REFS0))

/* ADC reference selection: filter mask for register bits */
#define ADC_REF_MASK          ((1 << REFS1) | (1 << REFS0))

/* ADC MUX channel: internal 1.1V bandgap reference */
#define ADC_CHAN_BANDGAP      0x0e      /* 1110 */

/* ADC MUX channel: filter mask for register bits */
#define ADC_CHAN_MASK         0b00001111     /* MUX0-3 */



/* ************************************************************************
 *   MCU specific setup to support different AVRs
 * ************************************************************************ */


/*
 *  ATmega 328/328P
 */

#if defined(__AVR_ATmega328__)

  /* estimated internal resistance of port to GND (in 0.1 Ohms) */
  #define R_MCU_LOW           200

  /* estimated internal resistance of port to VCC (in 0.1 Ohms) */
  #define R_MCU_HIGH          220

  /* voltage offset of MCU's analog comparator (in mV): -50 up to 50 */
  #define COMPARATOR_OFFSET   0

  /* this MCU has 32kB Flash, 1kB EEPROM and 2kB RAM (enable extra features) */
  #define RES_FLASH           32
  #define RES_EEPROM          1
  #define RES_RAM             2


/*
 *  missing or unsupported MCU
 */

#else
  #error <<< No or wrong MCU type selected! >>>
#endif



/* ************************************************************************
 *   EOF
 * ************************************************************************ */
