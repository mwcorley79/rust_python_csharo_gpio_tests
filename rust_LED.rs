// Source: (Python port)  Physical Computing with Rust
// https://rahul-thakoor.github.io/physical-computing-rust/step_0.html  ->  https://rahul-thakoor.github.io/physical-computing-rust/step_5.html
// code example used for this demo: ->  https://rahul-thakoor.github.io/physical-computing-rust/step_6.html


// 1. ssh to the raspberry pi
//    ssh username@rpi-ip-addreess
//    create a projects folder: 
//    mkdir projects && cd projects

// 2. on the Pi, get the Rust project code from the github repo
//    git clone https://github.com/rahul-thakoor/physcomp-rs-files
//    cd cd physcomp-rs-files

// 3. Copy this demo file: rust_LED.rs into the "examples" project folder on the Pi, using scp
//    (edit code in VSCode on your dev host, and secure copy to the Pi from execution/testing)
//    scp .\rust_LED.rs  username@rpi-ip-address:~/projects/LED_test/physcomp-rs-files/examples

// 4. from the ssh sesion: build and run the example:
//    cargo run --example rust_LED

// FYI:  gpio readall will the show the pin address schemes: wiringPi versus GPIO versus BCM

extern crate rust_gpiozero;
use rust_gpiozero::*;
use std::thread::sleep;
use std::time::Duration;

fn main() {

// Tell the Pi which GPIO pin you are using
let mut led = LED::new(20);

loop {
    // Make the led switch on
    println!("LED On");
    led.on();

    // Let the LED stay on for one second
    sleep(Duration::from_secs(1));

    // Make the led switch off
    println!("LED Off");
    led.off();

    // Let the LED stay off for one second
    sleep(Duration::from_secs(1));
    }
}