dicionario = {"A": "Amauri", "B": "Bunda", "C": "cuzinho"}

print(dicionario["A"])

print(dicionario["C"])

print(dicionario)

for chave in dicionario:
	print(chave+" - "+dicionario[chave])


for i in dicionario.items():
	print(i)

for i in dicionario.values():
	print(i)