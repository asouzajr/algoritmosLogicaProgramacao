# Os símbolos podem ser usados para apresentar números em diversos formatos
# Para aprsentar zeros à esquerda...
print('Agora são %02d:%02d.' % (16, 30))

# Real (número após o ponto controla as casas decimais)
print('Porcentagem: %.1f%%, Exponencial: %.2e' % (5.333, 0.00314))

# Octal e hexadecimal
print('Decimal: %d, Octal: %o, Hexadecimal: %x' % (10, 10, 10))

# Em suma, o operador "%" pode ser utilizado para fazer a interpolação. 

# O programador também pode usar o método de string e a função chmados format() para fazer interpolação.

musicos = [('Page', 'guitarrista', 'Led Zeppelin'),
('Fripp', 'guitarrista', 'King Crimson')]

# Parâmetros identificados pela ordem
msg = '{0} é {1} do {2}'

for nome, funcao, banda in musicos:
	print(msg.format(nome, funcao, banda))

# Parâmetros identificados pelo nome
msg = '{saudacao}, são {hora:02d}:{minuto:02d}'
print(msg.format(saudacao = 'Bom dia', hora = 7, minuto = 30))

# Função builtin format()

print('Pi =', format(3.14159, '.3e'))