/*TftMonitor library implements similar view of serial monitor of Arduino desktop IDE
 *on evive TFT display.
 *
 *Last editted on  01.08.2017 by Harsh Chittora an Dhrupal R. Shah
 *Added support for double and float
 *Improved Text wrap for int  
 *
 *How to use:
 *1) Declare a class object with any name, say tftMonitor, as: TftMonitor tftMonitor;
 *2) Now you can use the tftMonitor as Serial object: tftMonitor.print(123)
 *
 *Note: Work in progress.
*/

#ifndef TFTSERIAL_H
#define TFTSERIAL_H

//#include <arduino.h>
//#include "TFT_ST7735.h"

#include "evive.h"

extern TFT_ST7735 tft;// = TFT_ST7735();

class TftMonitor{
	private: 
		String s;							//string to be printed
	public:
		//TftMonitor(); 			//internally creates the class for tft.
		void begin();			//innitialises the tft


		//the print and println functions work same as the serial print and println
		void print(int i);
		void print(char c);
		void print(String s);
		//void	print(double, int = 2);	//upto arg2 number of decimals
    void print(double d);
    void print(float f);
		//void	print(int, int = DEC);	//Print in HEX/DEC/OCT
		
		//void println();
		void println(char c);
//		void println(int i);
		void println(String s);
		void println(void);
		void println(double d);
		void println(float f);
		void println(int i, int = DEC);
		// size_t print(const __FlashStringHelper *);
    // size_t print(const String &);
    // size_t print(const char[]);
    // size_t print(char);
    // size_t print(unsigned char, int = DEC);
    // size_t print(int, int = DEC);
    // size_t print(unsigned int, int = DEC);
    // size_t print(long, int = DEC);
    // size_t print(unsigned long, int = DEC);
    // size_t print(double, int = 2);
    // size_t print(const Printable&);
		
		// size_t println(const __FlashStringHelper *);
    // size_t println(const String &s);
    // size_t println(const char[]);
    // size_t println(char);
    // size_t println(unsigned char, int = DEC);
    // size_t println(int, int = DEC);
    // size_t println(unsigned int, int = DEC);
    // size_t println(long, int = DEC);
    // size_t println(unsigned long, int = DEC);
    // size_t println(double, int = 2);
    // size_t println(const Printable&);
    // size_t println(void);
		
	private:
		//TFT_ST7735 tft;
		uint8_t next_line;				//keep a track of the next line on tft.
		uint8_t next_col;				//keep a track of the next column on tft.
		

	
		
};

//extern TftMonitor tftMonitor;
#endif
