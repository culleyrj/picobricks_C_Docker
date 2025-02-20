# picobricks_C_Docker
This is a project to create some code and dockerfile to develop C code for the raspberry pi pico under a docker container

## Docker file
The docker file I am using is from lukstep.  This is my starting point.

## Directions
The directions that I am following are from the Element14 website **[Working with Pi Pico C/C++ Projects Easily: A Docker Approach!](https://community.element14.com/products/raspberry-pi/b/blog/posts/working-with-pi-pico-c-c-projects-easily-a-docker-approach)** but the site recently went down.

``` #!/bin/bash
docker run -d -it --name pico-sdk -- mount type=bind, source=${PWD}, target=/home/dev/lukstep/raspberry-pi-pico-sdk:latest
```

``` c++
std::cout << "Hello World\n";
```
