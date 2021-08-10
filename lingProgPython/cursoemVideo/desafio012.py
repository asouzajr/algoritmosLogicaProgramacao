# Faça um programa que leia o preço do produto e retorno o novo preço após
# aplicar 5% de desconto

nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
p = float(input('{}, para iniciar o cálculo, digite o valor do produto  em reais, R$ ' .format(nome)))
print('{}, com o desconto de 5% o preço final do produto é: R$ {:.2f}. Obrigado pela preferência!' .format(nome, p-(p*0.05)))
print('='*40)
print('Até a próxima!')