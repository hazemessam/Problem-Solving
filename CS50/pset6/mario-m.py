h = int()

while True:
    try:
        h = int(input('Height: '))
    except:
        continue
    if h >= 1 and h <= 8: break

for l in range(1, h+1):
    sNum = h - l
    for s in range(0, sNum):
        print(' ', end='')
    for i in range(0, l):
        print('#', end='')
    print('  ', end='')
    for i in range(0, l):
        print('#', end='')
    print()