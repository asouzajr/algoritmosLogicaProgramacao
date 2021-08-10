# Desenvolva um programa que leia as duas notas de um aluno, calcule e mostre
# as notas e a média.

print('='*40)
nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
n1 = float(input('{}, para iniciar a operação algébrica digite a primeira nota: ' .format(nome)))
n2 = float(input('{}, agora, digite a segunda nota: ' .format(nome)))
print('{}, Você digitou as notas {:.2f} e {:.2f}, e a média corresponde à: {:.2f}.' .format(nome, n1, n2, (n1+n2)/2))
print('Até a próxima!')