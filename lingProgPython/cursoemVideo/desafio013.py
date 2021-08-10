# Faça um programa que leia o salário do funionário, calcule e mostre o resultado
# quando aplicado um reajuste salarial de 15%

nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
s = float(input('{}, para iniciar o cálculo, digite o valor do salário em reais, R$ ' .format(nome)))
print('{}, com o reajuste de 15%, o novo salário do funcionário será: R$ {:.2f}.' .format(nome, s+(s*0.15)))
print('='*40)
print('Até a próxima!')