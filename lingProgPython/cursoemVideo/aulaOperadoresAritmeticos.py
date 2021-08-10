# Operadores Aritméticos--> adição (+); subtração (-); multiplicação (*);
# divisão (/) potência (**); divisão inteira (//); resto da divisão (%).
# Ordem de precedência: 1 --> (); 2 --> **; 3 --> *, /, //, %; 4 --> +,-
# A potência também pode ser realizada por meio da função pow(x,y)
# No python o limite do tamanho da capacitada do tipo de dados
# é a memória da máquina.

print('='*20)
nome = input('Qual é o seu nome? ')
print('{}, eu vou desejar boas vindas à você em diferentes formatações.'.format(nome))
print('Olá! Prazer em te conhecer {:20}!'.format(nome))
print('Olá! Prazer em te conhecer {:>20}!'.format(nome))
print('Olá! Prazer em te conhecer {:<20}!'.format(nome))
print('Olá! Prazer em te conhecer {:^20}!'.format(nome))
print('Olá! Prazer em te conhecer {:=^20}!'.format(nome))
n1 = int(input('Para iniciar, digite o primeiro número inteiro: '))
n2 = int(input('Para continuar, digite o segundo número inteiro: '))
s = n1 + n2
m = n1 * n2
d = n1 / n2
di = n1 // n2
r = n1 % n2
e = n1 ** n2
print('{}, o resultado da soma entre {} e {} é igual: {}'.format(nome, n1, n2, s))
print('{}, o resultado da multiplicação entre {} e {} é igual: {}'.format(nome, n1, n2, m))
print('{}, o resultado da divisão entre {} e {} é igual: {:.2f}'.format(nome, n1, n2, d))
print('{}, o resultado da divisão inteira entre {} e {} é igual: {}'.format(nome, n1, n2, di))
print('{}, o resultado do resto da divisão entre {} e {} é igual: {};'.format(nome, n1, n2, r), end=' ')
print('E o resultado da potência entre {} e {} é igual: {}'.format(n1, n2, e))
