// Source:  https://learn.microsoft.com/en-us/dotnet/iot/tutorials/blink-led
// 1. ssh to the raspberry pi
//    ssh username@rpi-ip-addreess
// 2. make sure dotnet is installed on the pi (run: "dotnet --version" in the terminal)
//    Note: follow instructions here to install dotnet on the Pi: https://learn.microsoft.com/en-us/dotnet/iot/deployment
// 3. create a projects folder: 
//    mkdir projects && cd projects
// 4. create a new console project, using the CLI
//    dotnet new console -o csharp_LED
//    cd csharp_LED
// 5. Add the Iot.Device.Bindings package:
//    dotnet add package Iot.Device.Bindings --version 2.1.0-*
//    delete file Program.cs (we will replace it with csharp_LED.cs)
//    rm Program.cs
//
// 6.  Use VSCode on your dev host to edit code, and secure copy to the Pi
//    scp .\csharp_LED.cs  username@rpi-ip-address:~/projects/LED_test/csharp_LED
// 7. build and run the example:
//    dotnet run

// FYI:  gpio readall will the show the pin address schemes: wiringPi versus GPIO versus BCM




using System;
using System.Device.Gpio;
using System.Threading;

int LED_pin = 20;
using var controller = new GpioController();
controller.OpenPin(LED_pin, PinMode.Output);

while (true)
{
    Console.WriteLine("LED On");
    controller.Write(LED_pin, PinValue.High);
    Thread.Sleep(1000);
   
    Console.WriteLine("LED Off");
    controller.Write(LED_pin, PinValue.Low);
    Thread.Sleep(1000);
}