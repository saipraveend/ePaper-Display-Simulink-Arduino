# Using Arduino to display text and image on an ePaper display  

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

# Using Simulink to interface with Arduino & the ePaper display

* MATLAB R2017a or upwards is required along with the Simulink support package for Arduino to create device drivers using system objects within MATLAB. 
* The code in this repo is the companion code to get started with the interfacing.
* Follow the step by step instructions in this article (link to be added) to proceed further.


