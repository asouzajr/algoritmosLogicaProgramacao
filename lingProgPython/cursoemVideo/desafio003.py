# Tipos primitivos--> int (inteiro); float (real); bool (booleano);
# str (string).
# Faça um programa que leia dois núemros e realize a soma e após mostre
# o resultado para o usuário.

nome = input('Qual é o seu nome? ')
print('Olá {}! Você habilitou a operação de soma.'.format(nome))
n1 = int(input('Para iniciar, digite o primeiro número inteiro: '))
n2 = int(input('Para continuar, digite o segundo número inteiro: '))
s = n1 + n2
print('{}, o resultado da soma entre {} e {} é igual: {}'.format(nome, n1, n2, s))
