# O laco while é adequado quando não há como determinar quantas iterações podem ocorrer e nao ha uma sequencia a seguir
# Soma de 0 a 99
s = 0
x = 1
while x < 100:
	s = s + x
	x = x + 1
print(s)