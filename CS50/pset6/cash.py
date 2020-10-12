d = float()
while True:
    try:
        d = float(input('change owed: '))
    except:
        continue
    if d > 0:
        break

c = round(d*100)
counter = 0
while c != 0:
    if c >= 25: 
        c -= 25
    elif c >= 10:
        c -= 10
    elif c >= 5:
        c -= 5
    else:
        c -= 1
    counter += 1
print(counter)
