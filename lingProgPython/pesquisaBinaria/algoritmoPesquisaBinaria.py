def pesquisaBinaria(lista, item):
    menor = 0
    maior = len(lista) - 1

    while menor <= maior:
        meio = (menor + maior) // 2
        chute = lista[meio]
        if chute == item:
            return meio
        if chute > item:
            maior = meio - 1
        else:
            menor = meio + 1
    return None
minhaLista = [1, 3, 5, 7, 9]

print(pesquisaBinaria(minhaLista, 3))
print(pesquisaBinaria(minhaLista, -1))
print(pesquisaBinaria(minhaLista, 9))
