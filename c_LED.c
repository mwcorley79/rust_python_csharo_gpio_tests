// Source: wiringPi (orginally by Gordon: http://wiringpi.com/ ) -> http://wiringpi.com/examples/blink/
// 1. ssh to the raspberry pi
//    ssh username@rpi-ip-addreess
// 2. create a projects folder: 
//    mkdir projects && cd projects
// 3. get the C Wiring Pi library (fork) here
//    git clone https://github.com/WiringPi/WiringPi.git
// 4. Building and install wiringPi on the Raspberry Pi
//    cd WiringPi 
//   ./build
//    Edit code inVSCode on your dev host, and secure copy to the Pi
//   scp .\c_LED.c  username@rpi-ip-address:~/projects/LED_test
// 5. from the ssh sesion: build and run the example:
//    gcc -Wall -o c_led c_LED.c -lwiringPi && ./c_led

// FYI:  gpio readall will the show the pin address schemes: wiringPi versus GPIO versus BCM

#include <wiringPi.h>
#include <stdio.h>

#define ledPin 28 //define the led pin number
int main(void)
{
  printf("Program is starting ... \n");
  wiringPiSetup(); //Initialize wiringPi.
  pinMode(ledPin, OUTPUT);//Set the pin mode
  printf("Using pin %d\n",ledPin); //Output information on terminal

  while(1)
  {
    digitalWrite(ledPin, HIGH); //Make GPIO output HIGH level
    printf("led turned on >>>\n"); //Output information on terminal
    delay(1000); //Wait1 for 1 second
    
    digitalWrite(ledPin, LOW); //Make GPIO output LOW level
    printf("led turned off <<<\n"); //Output information on terminal
    delay(1000); //Wait for 1 second  
   }

   return 0;
}


