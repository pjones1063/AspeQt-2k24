##  Atari AspeQt-2020 (13L)  /w MENU.COM


### Atari Serial Peripheral Emulator for Qt (Version 5- 2020 13L)

### Summary

AspeQt emulates Atari SIO peripherals when connected to an Atari 8-bit computer with an SIO2PC cable.
In that respect it's similar to programs like APE and Atari810. The main difference is that it's free
(unlike APE) and it's cross-platform (unlike Atari810 and APE).

See readme.txt for more info


#### * AspeQt Client module MENU.COM. Runs on the Atari and is used to get/set Date/Time (SpartaDos) on the Atari plus a variety of other remote tasks (on any DOS). 

#### * Package builds for Windows, Linux, MacOS, and RasPi at:  https://sourceforge.net/projects/respeqt/files/

#### * Do it yourself Atari usb2pc cable - see: SIO2PC__Build_Instructions.pdf (for under $20.00!)


#### Support and other inquiries can be made on our BBS at:   $ telnet 13leader.net 8023 or http://13leader.net



####  Raspberry Pi or other Debian based Linux installation 

* 1- Build a SIO2PC cable outlined in SIO2PC_Build_Instructions.pdf

* 2- Download AspeQt source zip file.  

* 3- Create a source folder.  Unzip source into the new folder

* 4- Update the Pi
  
  $ sudo apt update
  
  $ sudo apt upgrade
 
 
* 5- Install Qt and gcc

  $ sudo apt install make gcc qt5-default
 
 
 * 6- Compile and install AspeQt
 
   $ cd (source folder created above)
   
   $ qmake
   
   $ make
   
  * 7- Plug in the cable and run the AspeQt server.
  
    $ ./AspeQt
   
