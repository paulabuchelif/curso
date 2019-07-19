import RPi.GPIO as gpio
#para iniciar la board:
gpio.setmode(gpio.BOARD) 
gpio.setup(12,gpio.OUT)  #pin 12 es de salida
gpio.output(12, True)
gpio.output(12, False)