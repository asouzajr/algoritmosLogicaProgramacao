# Crie um programa que o valor em dinheiro disponível e a seguir calcule
# o valor em dólares que essa pessoa poderia comprar considerando o câmbio de
# US$ 1.00 = R$ 3.27

nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
n = float(input('{}, para iniciar a operação de conversão, digite o valor em reais que deseja fazer o câmbio R$ ' .format(nome)))
print('{}, você têm R$ {:.2f}. Você pode comprar US$ {:.2f}.'.format(nome, n, n/3.27))
print('-'*60)
print('Até a próxima!')