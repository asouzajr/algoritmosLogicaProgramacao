# As tuplas são semelhantes às lista, porém são imutáveis: não se pode acrescentar apagar ou fazer atribuições aos itens.

# Sintaxe: tupla = (a, b, ..., z)
# Os parênteses são opcionais

# tupla com um elemento
lista = ['A', 'B', 'C']
tupla = ('D', 'E', 'F')
t1 = (1)
print(t1)

t2 = (2, 3, 4, 5)
segundo_elemento = t2[1]
print(segundo_elemento)

# Uma lista poderá ser convertida em tupla, por exemplo:

tupla = tuple(lista)

#Paralelamente, uma tupla poderá ser convertida em uma lista, por exemplo:

lista = list(tupla)

print(tupla)
print(lista)