# É possível inverter strings usando um intervalo negaytivo
print('Python'[::-1])
# Resultado será "nohtyP"

# Por padrão, os índices em Python começam e zero e contam a partir do final se forem negativos
# Podem ser definidos como trechos, na forma [inicio:fim+1:intervalo]
# Note que se não for definido o início ser considerado "zero", e se o fim não for definido "fim+1" fica valendo o tamanho do objeto
# O intervalo entre os caracters quando não definido fica estabelecido em 1


# Várias funçoes para tratar com texto estão implementadas no módulo string

# Para importar o módulo sting faça:
import string

# O alfabeto
a = string.ascii_letters

# Rodando o alfabeto um caractere para a esquerda

b = a[1:24] + a[0]
print(b)
