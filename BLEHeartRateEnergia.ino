#include <BLE.h>
#include <BLEBoard.h>
#include <BLEEventHandling.h>
#include <BLELog.h>
#include <BLESerial.h>
#include <BLEServiceList.h>
#include <BLEServices.h>
#include <BLETypes.h>
#include <Board.h>

/***********************************************************************************************************************/




//  Copyright 2017. MOHAMMAD KHAN.
//  DEVELOEPD FOR THE UNIVERSITY OF TEXAS AT DALLAS
//  iOS Bluetooth Apps Course, Module 3, Hands-On Lab 1
//  
//  STUDENT COPY
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated 
//  documentation files (the "Software"), to deal in the Software without restriction, including without limitation 
//  the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and 
//  to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of 
//  the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO 
//  THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
//  TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
//  IN THE SOFTWARE.



//  SOFTWARE VERIFICATION
//  A copy of this software was tested to work with the MSP432+CC2650 BoosterPack Configuration. In the end the
//  software succesfully compiled and was uploaded to the hardware.
//
//  System Info: iMac (21.5-inch, Late 2013) running macOS Sierra 10.12.6 with Energia 1.6.10E18
//  Compile Date: August 1st 2017.
// 







/***********************************************************************************************************************/

// STEP 1: Make our mock-up data
// The mock-up data will consist of a heart rate value (beats per minute), a date of when that 
// heart value was captured,the location of the sensor on the body, and the sensor battery level status.



// Integer value for heart rate
int heartRate = 90;

// Character Arrays that will store text data for date, location, and battery level
char date[ ] = "June 30, 2017, 5:48 PM";
char sensorLocation [ ] = "Chest"
char batteryLevel[ ] = "100 %, Charging";


/***********************************************************************************************************************/


// STEP 2: Make our advertising data









/***********************************************************************************************************************/

// STEP 3: Declare our heart rate service characteristics here. To make these characteristics, we will use the 
// BLE_Char class and the syntax we discussed to do so. The characteristics are as follows.



 // HRValue Declaration





 // HRDate Declaration




 // HRSensorLocation Declaration




 // HRBatteryLevel Declaration




/***********************************************************************************************************************/

// STEP 4: Declaring the heart rate service (HRService)
// The first thing we have to do is to take all our characteristics and store them in an array. Then we can make our
// HRService using the BLE_Service Class and add our array in there.



// Characteristics Array



// HRService Declaration






/***********************************************************************************************************************/


void setup() {

// Initialize communication layer Network Processor


// Add the HRService


// Write the values from Step 1 for the corresponding characteristic










// Set Advertising Data. This is where we first complete Step 2. 



// Set Advertisement Name.



// Start Advertisement



  
}



void loop() {

// Handle BLE Events

  

}

// END OF SKETCH!






