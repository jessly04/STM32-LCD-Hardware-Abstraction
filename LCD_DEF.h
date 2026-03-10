#ifndef LCD_PINS_H    /* Guard against multiple inclusion */
#define LCD_PINS_H

enum LCD_Pins {
    RS = 9, // A
    EN = 8, // A
	D0 = 12, // B
	D1 = 13, // B
	D2 = 14, // B
	D3 = 15, // B
    D4 = 6, // C
    D5 = 7, // C
    D6 = 8, // C
    D7 = 9, // C
    DMask = 0 // ALL
};
enum LCD_Pins_channel {
	CA = 0,
	CB = 1,
	CC = 2,
	all = 3
};

enum LCD_CMD {
    Clear = 0x01, //0001
    Home = 0x02, //0010
    LCDOn = 0x0C, //1100
    EMS = 0x06, //0111
    DDRM = 0x80 //10000000
};

#endif 
