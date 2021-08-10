# Crie um progrma que leia um número e mostre o resultado das
# operações: dobro, triplo e raiz quadrada.

print('='*40)
nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
n = int(input('{}, Para iniciar a operação algébrica digite um número inteiro: ' .format(nome)))
print('{}, Você digitou o número {}, as operações de dobro, triplo e a raíz quadrada \n sobre esse número correspondem à: {}, {} e {:.2f}.' .format(nome, n, n * 2, n * 3, n ** 0.5))
# A raiz quadrada também pode ser calculada aplicando pow(n, 0.5)
print('Até a próxima!')