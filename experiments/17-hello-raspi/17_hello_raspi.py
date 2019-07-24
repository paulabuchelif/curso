import RPi.GPIO as gpio
import time 
#para iniciar la board:
gpio.setmode(gpio.BOARD) 
gpio.setup(24,gpio.OUT)  #pin 12 es de salida
gpio.setup(23, gpio.IN, pull_up_down = gpio.PUD_UP)
# gpio.output(24, True)
# time.sleep(20)
# gpio.output(24, False)
# gpio.cleanup(24)
while True:
    input_state = GPIO.input(23)
    if input_state == False:
        gpio.gpio.output(24, True)
    else:
    gpio.gpio.output(24, False) 
time.sleep(0.3)
gpio.cleanup(23)
gpio.cleanup(24)
