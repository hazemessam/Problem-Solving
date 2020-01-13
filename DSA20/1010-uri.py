p1 = input('')
p2 = input('')

p1 = p1.split()
p2 = p2.split()

for i in range(1, 3):
    p1[i] = float(p1[i])
for i in range(1, 3):
    p2[i] = float(p2[i])
    
t = p1[1]*p1[2] + p2[1]*p2[2];
print('VALOR A PAGAR: R$ {:.2f}'.format(t))