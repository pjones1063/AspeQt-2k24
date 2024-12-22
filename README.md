#  Atari AspeQt-2K24 -- 2024 Release

###  Atari 8-bit in 2024 - 45 years after the 400/800 first release!

![image](https://github.com/pjones1063/AspeQt-2K24/assets/3331718/40ce3dff-649a-4c0f-b48b-58a508433905)



### Atari Serial Peripheral Emulator for Qt With 8bit Cartridge
![image](https://github.com/pjones1063/AspeQt-2K24/assets/3331718/6b1424c8-2fa6-49d4-9e18-7fa3bdc0a39a)


### Summary

AspeQt emulates Atari SIO peripherals when connected to an Atari 8-bit computer with an SIO2PC cable.
In that respect it's similar to programs like APE and Atari810. The main difference is that it's free
(unlike APE) and it's cross-platform (unlike Atari810 and APE).

![image](https://user-images.githubusercontent.com/3331718/148149370-520fe21f-ea5b-4697-9a6c-97bc180dfc35.png)


See readme.txt for more info


#### * AspeQt Client module MENU.COM. Runs on the Atari and is used to get/set Date/Time (SpartaDos) on the Atari plus a variety of other remote tasks (on any DOS). 

#### * Package builds for Windows, Linux, MacOS, and RasPi at:  https://sourceforge.net/projects/respeqt/files/

#### * Do it yourself Atari SIO2PC cable - see: SIO2PC__Build_Instructions.pdf (for under $20.00!)


#### Support and other inquiries can be made on our BBS at:   $ telnet 13leader.net 8023 or http://13leader.net


### AspeQt 2K24 Cartridge

The AspeQt 8bit Cartridge can be run from most Atari cart emulators (UnoCart, Ultimate Cart, etc.)  
All AspeQt disk and most printer functions can be done using the cartridge. 

Two versions of the cart are available:

#####  MenuCart_BOOT_2k24.car - Boot D1: on power up 

#####  MenuCart_NoneBOOT_2k24.car - No Disk boot on power up


### Windows and MacOS installation instructions:

1- Build a SIO2PC cable outlined in SIO2PC_Build_Instructions.pdf

Very simple - Download Windows or MacOS.

Unzip and run the AspeQt 32 or 64 bit exe application on Windows.

Unzip and mount the AspeQT image on MacOS

Allow AspeQT to run in MacOS Settings > Security and Privacy > Allow Apps Downloaded From


### Debian/Ubuntu Linux installation instructions:

1- Build a SIO2PC cable outlined in SIO2PC_Build_Instructions.pdf

2- Unzip aspeqt_xxxxxx_2k24-2_amd64.zip

$ sudo apt install  ./aspeqt_2k24-2_amd64.deb

$ sudo usermod -a -G dailout (my username)

3- reboot (for usermod)

$ Aspeqt


###  Raspberry Pi or other Debian based Linux build instructions: 


* 1- Build a SIO2PC cable outlined in SIO2PC_Build_Instructions.pdf

* 2- Download AspeQt source zip file.  

* 3- Create a source folder.  Unzip source into the new folder

* 4- Update the Pi
  
  $ sudo apt update
  
  $ sudo apt upgrade
 
 
* 5- Install Qt and gcc

  $ sudo apt install make gcc qt5-default
  
  $ sudo apt-get install libqt5serialport5 
  
  $ sudo apt-get install libqt5serialport5-dev
 
 
 * 6- Compile and install AspeQt
 
   $ cd (source folder created above)
   
   $ qmake
   
   $ make clean
   
   $ make 
   
   $ sudo usermod -a -G dailout username
   
   
  * 7- Reboot for usermod
  
  * 8 Plug in the cable and run the AspeQt server.
  
    $ ./AspeQt
    
    
    
    
 
* NOTE: If you installed Raspbian Lite onto your Micro-SD card you will probably get an error saying
"unable to open x display", you will likely need to run the following commands to load ldxe, x11 & lightdm:


  $ sudo apt-get install lxde lxde-core lxterminal lxappearance
	(answer Y for y/n question... this takes a loooong time to install)
     
  $ sudo apt-get install lightdm
 	(this also takes a long time to load - be patient)
 
  $ sudo apt-get install xserver-xorg 
  
  $ sudo apt-get install xinit
  
  $ sudo apt-get install x11-xserver-utils
 	(answer Y for y/n question)
 
  $ sudo apt-get install xterm
 
  $ startx
 	(Opens X window) 
 
   
