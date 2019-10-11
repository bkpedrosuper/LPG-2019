a,num = [int(x) for x in input().split()]
lista = []
for i in range(a):
    x = input()
    lista.append(x)
lista.sort()
print(lista[num-1])