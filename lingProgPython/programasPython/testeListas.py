primeiraLista = ["abacaxi","melancia", "laranja"]
segundaLista = [1,6,9]

print(primeiraLista)

print(segundaLista[2])


for item in primeiraLista:
	print(item)


tamanho = len(primeiraLista)

print(tamanho)


primeiraLista.append("limao")

for item in primeiraLista:
	print(item)


if 6 in segundaLista:
	print("6 esta na lista")

del primeiraLista[2:]

for item in primeiraLista:
	print(item)


