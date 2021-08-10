# Faça um programa que leia a temperatura em ºC (em graus Celsius) e, a seguir,
# calcule e mostre o resultado em ºF (Fahrenheit) K (Kelvin).

nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
t = float(input('{}, para iniciar o cálculo, digite o valor da temperatura em graus Celsius: ' .format(nome)))
print('{}, você digitou a temperatura de {:.2f} ºC, que corresponde a {:.2f} ºF.' .format(nome, t, (1.8 * t) + 32))
print('-'*50)
print('Até a próxima!')