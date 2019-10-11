h = int(input())

vet = [int(x) for x in input().split()]

estragado=0
conserto=0

for i in vet:
    if i<50:
        estragado+=1
    if i>=50 and i<85:
        conserto+=1

print(estragado,conserto)