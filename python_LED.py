# Source: Physical Computing with Python
# https://projects.raspberrypi.org/en/projects/physical-computing  -> https://projects.raspberrypi.org/en/projects/physical-computing/4

# 1. ssh to the raspberry pi
#   ssh username@rpi-ip-addreess
# 2. create a projects folder: 
#    mkdir projects && cd projects
#   check that python3 and pip3 are installed oin the Pi (if not, install)
# 3. install the GPIO acess library: gpiozero 
#    pip install gpiozero 
# 4. Edit code in VSCode on your dev host, and secure copy to the Pi
#    scp .\python_LED.py  username@rpi-ip-address:~/projects/LED_test
# 5. from the ssh sesion: run the example:
#    python python_LED.py

# gpio readall will the show the pin address schemes: wiringPi versus GPIO versus BCM

from gpiozero import LED
from time import sleep

led = LED(20)  # Pin 20 (BCM mode) is the same as Pin 28 (wiring Pi) 

while True:
    print("LED On")
    led.on()
    sleep(1)

    print("LED Off")
    led.off()
    sleep(1)