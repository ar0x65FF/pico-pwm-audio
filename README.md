# Raspberry Pico PWM Audio
This is example program that plays 8Bit 8000Hz Mono audio using pwm

Build and program using openocd on PI 4B: 
```
mkdir build
cd build
cmake ..
make -j4
openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg -c "program my_demo.elf verify reset exit"
```
Remeber to set PICO_SDK_PATH in env variable
Example:

```
export PICO_SDK_PATH=/home/pi/rpi_pico/pico-sdk
```

Or before CMAKE command

```
PICO_SDK_PATH=/home/pi/rpi_pico/pico-sdk/ cmake ..
```
