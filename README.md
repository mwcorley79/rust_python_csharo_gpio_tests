<h3>This project is a comparison of different language models and their corresponding library support for general-purpose I/O (GPIO) access to the Raspberry Pi (40 pin -> models B+, 2, Zero, 3, and 4), as it relates prototyping DIY Internet-of-things (IoT) projects. </h3>

<h4> This current version is limited to illustrating simple comparison code for blinking an LED using four popular languages:  Python, C, Rust, and C# (.net)
</h4>

<p> For <b> Python </b> - the library illustrated is gpiozero, with example code taken from “Physical computing with Python” (https://projects.raspberrypi.org/en/projects/physical-computing/4).  This project was chosen because there is an initiative to adapt/port the project to Rust:  “Physical Computing with Rust” ( https://rahul-thakoor.github.io/physical-computing-rust/step_0.html), and I felt that it would be easy method to compare Rust and Python code.
</p>

<p> For <b> C/C++ </b> - the community supported fork of the wiringPi library is  used (https://github.com/WiringPi/WiringPi.git), with code examples taken from: http://wiringpi.com/examples/blink/
</p>

<p> Lastly, for <b> C# </b> - the nuget Iot.Device.Bindings package is used. </p> 

<br/>
Instructions and basic details for configuring the Raspberry Pi to run the example code can be found at the beginning of each of the respective code examples:
<ul>
  <li>
    C/C++ - c_LED.c
  </li>
  <li>
    Python – python_LED.py
   </li>
   <li>
     Rust – rust_LED.rs
   </li>
   <li>
     C# - csharp_LED.cs
   </li>
  </ul>
  <p>
These projects will continue to expand in capability and complexity, so please check back. A current initiative is to extend these examples to illustrate how to connect and send telemetry (device sensor data) to the Azure and AWS Clouds.
</p>
A simple example for reading and transmitting temperature sensor telemetry to the Azure Cloud (IoT Hub) can be found here: 
https://github.com/mwcorley79/python3probes/blob/main/python_rpi_temperature_iot_device.py

<h3> <b> Raspberry Pi 2, simple LED breadboard used for the comparion test </b> </h3>

![rpi2](https://user-images.githubusercontent.com/51803504/209216036-8849c81c-152c-40e8-b91f-5091027066d7.png)
