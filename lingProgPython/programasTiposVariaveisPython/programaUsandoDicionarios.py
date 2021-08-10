# Um dicionário é uma lista de associações compostos de uma chave única e estruturas correspondentes.
# Dicionários são mutáveis, similar as listas.
# A chave deve ser imutável, incluindo strings, tuplas ou tipos numéricos.
# O dicionário não garante que as chaves estarão ordenadas e nem que a ordem original será mantida.

# Exemplo de um dicionario
dic = {'nome': 'Shirley Manson', 'banda': 'Garbage'}

# Para acessar os elementos do dicionário.
print('Nome:', dic['nome'])

# Para Adiconar elementos no dicionário:
dic['album'] = 'Version 2.0'
print('Álbum:', dic['album'])


# Para apagar um elemento do dicionário:
del dic['album']

# Para obter os itens, chaves e valores do dicionário:
print('itens:', dic.items())
print('chaves:', dic.keys())
print('valores:', dic.values())

# Outros exemplos usando dicionários:
progs = {'Yes':['Close to the edge', 'Fragile'],
'Genesis': ['Fostrot', 'The Nursery Crime'],
'ELP': ['Brain Salad Surgery']}

# Adicionando outro progs:
progs['King Crimson'] = ['Red', 'Discipline']

# items() esse método retornará uma lista de tuplas com a chave e o valor

for prog, albuns in progs.items():
	print(prog, '=>', albuns)
print(len(progs), 'bandas')

# se tiver 'ELP', haverá uma exclusão

if 'ELP' in progs:
	del progs['ELP']

print('Agora,', len(progs), 'bandas')