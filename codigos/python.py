print('Introducao a computacao - Phyton - Programa = v1.0')
print('Autor: 770493_Iago')
print('---------------------------------------------')
print('Ler uma palavra do teclado e mostrar as letras minusculas: ')
w = input('Digite uma palavra:')
c = 0
print(f'Sua palavra: [{w}]')
for x in w:
    if x == x.lower():
        print(x)
        c += 1


print(f'Total de letras minusculas foram {c}')
print('---------------------------------------------')
