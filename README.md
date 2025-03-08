# picobricks_C_Docker
This is a project to create some code and dockerfile to develop C code for the raspberry pi pico under a docker container.
------
The pico bricks board has a nice feature if you find programming your board by disconnecting the USB port a little tedious.  On the pico bricks board there is a reset button on the opposite side the USB port plugs in.  Hold the Reset button, press and hold the bootsel button, release the reset and then release the bootsel button.  The device is now in programming mode.  I have a usb hub that allows me to power down individual usb connections.  I use this feature over disconnecting the USB plug for programming.

## Docker file
The docker file I am using is from lukstep.  This is my starting point.

## Directions
The directions that I am following are from the Element14 website **[Working with Pi Pico C/C++ Projects Easily: A Docker Approach!](https://community.element14.com/products/raspberry-pi/b/blog/posts/working-with-pi-pico-c-c-projects-easily-a-docker-approach)** 

-------

I am looking to follow the instructions above but to do the boiler plate from pimorni.

``` #!/bin/bash
docker run -d -it --name pico-sdk -- mount type=bind, source=${PWD}, target=/home/dev/lukstep/raspberry-pi-pico-sdk:latest
```

