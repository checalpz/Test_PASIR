#!/usr/bin/python

# MiniProyect_03
# 21-4-2018
# Ana Checa


import serial
import time

arduino = serial.Serial('/dev/ttyACM0', baudrate=9600)



texto = ''

while True:

	comando = raw_input('Introduzca un comando: ')
	arduino.write(comando)
	time.sleep(0.1)

	while arduino.inWaiting() > 0:	#Mientras tengamos que leer algo de Arduino
		texto += arduino.read(1)

	print texto
	texto = ''

arduino.close() # Finalizar la comunicacion

