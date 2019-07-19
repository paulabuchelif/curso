import RPi.GPIO as gpio
import time 
#para iniciar la board:
gpio.setmode(gpio.BOARD) 
gpio.setup(12,gpio.OUT)  #pin 12 es de salida
gpio.output(12, True)
time.sleep(20)
gpio.output(12, False)
gpio.cleanup(12)