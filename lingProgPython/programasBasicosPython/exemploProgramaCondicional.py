temp = int(input('Entre com a temperatura: '))
	
if temp < 0:
		print("Congelando...")
elif -1 < temp < 21:
	print('Frio')
elif 20 < temp < 26:
	print('Normal')
elif 25 < temp < 36:
	print('Quente')
else:
	print('Muito quente!')

