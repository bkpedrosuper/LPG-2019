soma=0
for i in range(int(input())):
    a,b = [int(x) for x in input().split()]
    soma+=a*b
    #print(soma)
print(soma)