# O iterador enumerate() retorna uma tupla de dois elementos a cada iteração: um número sequencial e um item da sequênica correspondente
# A lista contém o método pop(), que facilita a implementação de filas e pilhas

#Exemplo: 

lista = ['A', 'B', 'C']
print('lista:', lista)

# A lista vazia é avaliada como falsa
while lista:
	# Em filas, o primeiro item é o primeiro a sair
	#pop(0) remove e retorna o primerio item
	print('Saiu', lista.pop(0), ', faltam', len(lista))

# Para adicionar mais itens na lista

lista += ['D', 'E', 'F']
print('lista:', lista)

while lista:
	# Em pilhas, o primeiro item é o último a sair
	#pop() remove e retorna o último item
	print('Saiu', lista.pop(), ', faltam', len(lista))

# Note que as operações de ordenação (sort) e inversão (reverse) são realizadas a própria lista. Não geram novas listas

