# Faça um programa que leia a altura e a largura de uma parede em metros
# A partir dos valores o programa deverá calcular a área e o volume de tinta
# necessário para pintar a respectiva pared. Considere que cada litro de tina o
# rendimento da pintura equivale a 2 m². No final apresente o resultado para o usuário.
# Para colocar m², selecionar o 2 e digitar as teclas Alt+0178.

nome = input('Qual o seu nome: ')
print('Olá {}! Seja bem-vindo(a)!' .format(nome))
l = float(input('{}, para iniciar o cálculo, digite a largura da parede que você deseja pintar em metros: ' .format(nome)))
a = float(input('{}, agora, digite a altura da parede em metros: ' .format(nome)))
print('{}, a parede tem a dimensão {:.2f} x {:.2f} m. A área da parede é de {:.2f} m². \n Será necessário comprar {:.2f} L(s) de tinta para pinta a parede.'.format(nome, l, a, l*a, l*a/2))
print('='*40)
print('Até a próxima!')

