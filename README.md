# STM32-LCD-Hardware-Abstraction
This project interfaces a STM32F030 R8T6 with a LCD. The focus of this is to map a standard 8-bit data bus across the STM32 microcontroller pins using manual register manipulation
### Technical Features
- **Hardware Pin Implementation**: Grouped pins from GPIO Ports A, B, and C, ensuring all utilized pins were 5V Tolerant (FT) which allowed us to implement the 8-bit data bus
- **Bit-Level Data Mapping:** Developed a custom LCD_OUT function that uses bitwise masking to split a character byte and move individual bits to their respective hardware channels.
- **Manual Register Configuration:** Configured the MODER (Mode Register) and OTYPER (Output Type Register) without high-level libraries to establish high-speed push-pull outputs.
- **Custom Timing Drivers:** Implemented software-based microsecond delay functions (delay_us3) to meet initial communication timing requirements.
**Hardware**
  - **Microcontroller:** STM32F030R8T6
  - **Programmer:** ST-Link V2
  - **Output:** 8 LEDS (color doesn't matter)
 **Challenge & Solution**
Before interfacing with the LCD (used in the next couple of projects), we had to verify that our bit-masking logic was correctly splitting a 1-byte character into 8 individual bits or in this case, signals. So, we connected 8 LEDs to the pin designated for the data bus (D0-D7) that would be used on the LCD and hardcoded a variable to the character 'A' (Binary: 01000001). The expected result was the LEDs lighting up to Bit 0 and Bit 6 for 01000001 where you read from LSB first.
### Project Structure
- LCD.c / LCD.h: Bit-level data transmission and hardware control
- LCD_DEF.h: The hardware mapping file containing both pin and port definitions
- main.h: HAL headers and standard system definitions
### Project Collaboration
This project was co-developed by Jessica Ly and Daniel Meija Mendez. We worked together to identify the 5V tolerant pins and verify the bit-masking logic.
