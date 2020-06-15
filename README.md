This repository contains a stand alone datatype called SfmlCtrl (for SFML Controller).  It stores
data for a usb controller/joystick that was pulled using the SFML Joystick.  The datatype does 
not depend on SFML, but was built specifically for the kinds of data you can get using SFML.  The
only dependency for this datatype is the C++11 or above Standard Library.  Clone this repo to grab
the SfmlCtrl.h file and add to your own projects. As a datatype with no methods, there is no .cpp 
file.  To test this datatype out clone the repo to the directory of your choice, then run the 
"make" command from the commandline in that directory to compile the driver for testing. The driver
program also provide an example of using this datatype.  Run the compiled driver by typing ./run 
on the command line from the directory this repo was cloned to.  
