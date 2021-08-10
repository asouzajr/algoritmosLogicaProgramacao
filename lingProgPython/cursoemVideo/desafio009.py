# Escreva um programa que leia um número inteiro, calcule e mostre
# na tela a respectiva tabuada.

print('='*88)
nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
n = int(input('{}, para iniciar a operação algébrica digite o valor que deseja fazer a tabuada: ' .format(nome)))
print('{}, você digito o número {}. A tabuada desse número é:' .format(nome, n))
print('-'*22)
for i in range(1,11):
    print('{:^5} x {:^5} = {:^5}' .format(i, n, i*n))
print('-'*22)
print('Até a próxima!')