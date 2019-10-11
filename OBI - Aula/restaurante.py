testes=0
while(True):
    testes+=1
    raio,largura,altura = [float(x) for x in input().split()]
    if raio==0:
        break
    
    diagonal = ((largura/2)**2+(altura/2)**2)**(1/2)

    if diagonal <=raio:
        print("Pizza %i fits on the table." %testes)
    else:
        print("Pizza %i does not fit on the table." %testes)