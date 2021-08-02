#Listas são coleções heterogêneas de objetos que podem ser de qualquer tipo, incluse outras listas.
# As listas em python são mutáveis, podendo ser alteradas a qualquer momento.

#lista = [a, b, c]

# Uma nova lista: Brit Progs dos anos 70

progs = ['Yes', 'Gnesis', 'Pink Floyd', 'ELP']

# Para varrer uma lista inteira
for prog in progs:
	print(prog)

#Trocando o último elemento
progs[-1] = 'King Crimson'
for prog in progs:
	print(prog)

# Incluindo um novo item na lista
progs.append('Camel')

for prog in progs:
	print(prog)

# Para remover um intem utiliza a função remove

progs.remove('Pink Floyd')
for prog in progs:
	print(prog)

# Para ordenar a lista utilize a função sort

progs.sort()
for prog in progs:
	print(prog)

# Inverte a lista
progs.reverse()
for prog in progs:
	print(prog)

# Para imprimir numerado

for i, prog in enumerate(progs):
	print(i + 1, '=>', prog)

# Imprime do segundo item em diante
print(progs[1:])