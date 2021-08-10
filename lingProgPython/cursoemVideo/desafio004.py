# Tipos primitivos--> int (inteiro); float (real); bool (booleano); str (string).
# Faça um programa que leia algo pelo teclado e mostre na tela o seu tipo
# primitivo e todas as informações possíveis sobre o que foi digitado.
nome = input('Qual é o seu nome? ')
print('Olá {}! Você habilitou o teste que retorna o tipo primitivo.'.format(nome))
n = input('Para iniciar, digite algo que desejar: ')
print('{}, você digitou um tipo primitivo: '.format(nome), type(n))
print('O dado digitado é alfanumérico? ', n.isalnum())
print('O dado digitado é alfabético? ', n.isalpha())
print('O dado digitado é formato ASCII? ', n.isascii())
print('O dado digitado é um número? ', n.isnumeric())
print('O dado digitado esta escrito em letras minúsculas? ', n.islower())
print('O dado digitado esta escrito em letras maiúsculas? ', n.isupper())
print('O dado digitado é composto por apenas espaços? ', n.isspace())
print('O dado digitado está capitalizado? ', n.istitle())

