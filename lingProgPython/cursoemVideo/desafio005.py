# Faça um programa que leia um número inteiro e mostre na tela o seu sucessor
# e o seu antecessor.

print('='*40)
nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
n = int(input('{}, Para iniciar a operação algébrica digite um número inteiro: ' .format(nome)))
print('{}, Você digitou o número {}, o antecessor e sucessor deste número são: {} e {}, respectivamente.' .format(nome, n, n-1, n+1))
print('Até a próxima!')