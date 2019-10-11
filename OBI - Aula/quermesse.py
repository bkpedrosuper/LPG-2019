teste=0

while(True):

    h = int(input())
    if h==0:
        break
    
    vet = [int(x) for x in input().split()]
    teste+=1

    for i in range(h):
        if(vet[i]==i+1):
            print("Teste", teste)
            print(i+1)
            print("")
            break
    
    