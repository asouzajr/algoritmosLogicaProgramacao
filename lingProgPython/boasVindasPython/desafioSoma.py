print('Você solicitou a opção soma.')

# Entrada de dados do usuário e atribuição desses valores nas variáveis
x = float(input('Para iniciar, digite o primeiro número: '))
y = float(input('Agora, digite o segundo número: '))

# Função que realizará a soma entre os números digitados pelo usuário
def sum(x, y):
	return x + y

# Imprime o resultado da soma na tela para o usuário
print('O resultado da soma é:', sum(x,y))