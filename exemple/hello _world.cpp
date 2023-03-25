#include "mbed.h"
#include <LiquidCrystal_I2C.h>
 //L432KC
#define I2C_SDA PB_7
#define I2C_SCL PB_6
//L452RE
//  #define I2C_SDA PB_9
//  #define I2C_SCL PB_8
 
I2C i2c(I2C_SDA , I2C_SCL );
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(i2c,0x4E, 16, 2);



int main()
{
 
    // initialize the LCD
    lcd.begin();

    // Turn on the blacklight and print a message.
    lcd.backlight();
    lcd.print("Hello, world!");
    
    while (1) {
        /*
        // Read temperature register
        data_write[0] = LM75_REG_TEMP;
        i2c.write(LM75_ADDR, data_write, 1, 1); // no stop
        i2c.stop();
        wait(0.01);
        i2c.read(LM75_ADDR, data_read, 2, 0);
        i2c.stop();
*/
        wait(0.01);
    }
 
}
 
