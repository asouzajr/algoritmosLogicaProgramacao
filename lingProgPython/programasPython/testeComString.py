a = "Amauri "
b = "Alves "
c = "de "
d = "Souza "
e = "Júnior"

concatenar = a + b + c + d + e + "!!" + "\n"

print(concatenar)

tamanho = len(concatenar)
print(tamanho)

#print(a[1])
#print(a[2])
#print(a[3])

#print(concatenar[0:6])

#print(concatenar.lower())

#print(concatenar.upper())

#print(concatenar.strip())

variavelTexto = "Vai tomar no seu cu fé da égua"

lista = variavelTexto.split("a")

print(lista)

busca = variavelTexto.find("cu")

print(busca)

print(variavelTexto[busca:])


variavelTexto = variavelTexto.replace("cu", "boceta")

print(variavelTexto)