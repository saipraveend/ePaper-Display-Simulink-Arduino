# Displaying text and image on a ePaper display using Arduino & Simulink

* ePaper display - 1.54 inch ePaper display from waveshare 
  * Doc - https://www.waveshare.com/wiki/1.54inch_e-Paper_Module#Documentation,
  * Manual - https://www.waveshare.com/w/upload/7/7f/1.54inch_e-paper_module_user_manual_en.pdf, 
  * Code - https://github.com/waveshare/e-Paper/tree/master/1.54inch_e-paper_code/arduino
* Connections considering Arduino Uno:  
BUSY PIN --> 7 | RST PIN --> 9 | DC PIN --> 8 | CS PIN --> 10 | CLK PIN / SCK --> 13 | DIN PIN / MOSI --> 11 | GND --> GND | 3.3V --> 3.3V
* Connections considering Arduino Mega:  
BUSY PIN --> 7 | RST PIN --> 9 | DC PIN --> 8 | CS PIN --> 10 | CLK PIN / SCK --> 52 | DIN PIN / MOSI --> 51 | GND --> GND | 3.3V --> 3.3V
* The code is modified to include text wrapping on the screen & the default image is changed to include Mathworks logo.
* To run the code download the files into a folder & open the .ino file in Arduino.
