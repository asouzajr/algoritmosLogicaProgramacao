# Escreva um programa que receba leia um valor em metro e exiba o resultado da
# conversão para centímetros e milímetro.

print('='*40)
nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
n = float(input('{}, para iniciar a operação algébrica digite, em metros, o valor que deseja fazer a conversão: ' .format(nome)))
print('{}, Você digitou {:.3f} metros, esse valor corresponde à: {:.3f} km, {:.3f} hm, {:.3f} dam, {:.3f} dm, {:.3f} cm e {:.3f} mm.' .format(nome, n, n/1000, n/100, n/10, n*10, n*100, n*1000))
print('Até a próxima!')
