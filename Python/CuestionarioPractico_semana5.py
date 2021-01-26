'''
1.
Pregunta 1

Escribe una función que reciba dos strings (de largo > 2) como parámetros,
 y retorne un string de largo 4 que consista de las dos primeras letras del primer string y 
 las últimas dos letras del segundo.
Por ejemplo, si los strings son "familia" y "abrigarse", entonces tu función debe retornar "fase".

def mezclador(string_a, string_b):
	if len(string_a) > 2 and len(string_b) > 2:
		palabra1 = string_a[:2]
		palabra2 = string_b[-2:]
		palabra3  = palabra1+palabra2
	return palabra3

print(mezclador("familia","abrigarse"))
'''
'''
2.
Pregunta 2

Escriba una función que reciba dos strings como parámetros y retorne un nuevo string que consista del primero, 
pero con el segundo string intercalado entre cada letra del primero.

Por ejemplo si los strings son "paz" y "so", entonces tu función debe retornar "psoasozso"
'''
def intercalar(string_a, string_b):
    i = 0
    cadena = ""
    while(i < len(string_a)):
        cadena += string_a[i] + string_b
        i = i + 1
    return cadena



print(intercalar("paz", "so"))

'''
3.
Pregunta 3

Escriba una función que reciba un string consistente de unos y ceros y 
retorne la cantidad de ocurrencias de unos menos la cantidad de ocurrencias de ceros.

Por ejemplo, si el string es "11000110101", entonces tu función debe retornar 1 (ya que hay 6 unos y 5 ceros)

def ocurrencias(string):
	uno = ""
	cero = ""
	result = 0 

	uno = str(string.count('1'))
	cero = str(string.count('0'))
	result = int(uno) - int(cero)
	return result

print(ocurrencias("11000110101"))
'''
'''
4.
Pregunta 4

Escriba una función que reciba un string s y un número n como parámetros y retorne el mismo string s pero sin el elemento en el índice n.

Por ejemplo, si s es "Hasta luego" y n es 3, entonces tu función debe retornar "Hasa luego".

Hint: cuidado con aquellos casos en los que se tenga que eliminar un elemento de los bordes.

def remover_enesimo(s, n):
	inicio = 0
	fin = len(s)
	if int(n) < len(s) and int(n) > len(s):
		print("No esta dentro del parametro")
	else:
		resultado = s[inicio:n] + s[n+1:fin]# s[0:3] + [3+1:11]
	return resultado

remover_enesimo("Hasta luego",3)
'''
'''
5.
Pregunta 5

Escriba una función que reciba un string como parámetro y retorne el string, 
pero con cada elemento que estuviese en mayúsculas 
reemplazado por "$". Asuma que el string consistirá solamente de letras.

Por ejemplo si el string es "Viva la Vida", entonces tu función debe retornar "$iva la $ida".

def reemplazo(string):
  if string.isupper():
    return "$"
  else:
    return string

original= "Viva la Vida"
lista_resultado = [ dolar_o_letra(c) for c in original ]
cadena_resultado = "".join(lista_resultado)
print(cadena_resultado)

'''