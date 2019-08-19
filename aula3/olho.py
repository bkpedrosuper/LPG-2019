x = float(input())
'''
Notas
'''
n100 = x // 100
n50 = x % 100 // 50
n20 = x % 50 // 20
n10 = x % 20 // 10
n5 = x % 10 // 5
n2 = x % 5 // 2
'''
Moedas
'''
m100 = float(x) % 2 // 1
m50 = float(x) % 1 // 0.5
m25 = float(x) % 0.5 // 0.25
m10 = float(x) % 0.25 // 0.10
m5 = float(x) % 0.10 // 0.05
m1 = float(x) % 0.05 // 0.01

print("NOTAS: ")
print("%.0f nota(s) de R$ 100.00" %n100)
print("%.0f nota(s) de R$ 50.00" %n50)
print("%.0f nota(s) de R$ 20.00" %n20)
print("%.0f nota(s) de R$ 10.00" %n10)
print("%.0f nota(s) de R$ 5.00" %n5)
print("%.0f nota(s) de R$ 2.00" %n2)
print("MOEDAS: ")
print("%.0f moeda(s) de R$ 1.00" %m100)
print("%.0f moeda(s) de R$ 0.50" %m50)
print("%.0f moeda(s) de R$ 0.25" %m25)
print("%.0f moeda(s) de R$ 0.10" %m10)
print("%.0f moeda(s) de R$ 0.05" %m5)
print("%.0f moeda(s) de R$ 0.01" %m1)
