def next_higher(value):
    ones_num = bin(value).count('1')
    target = value + 1
    while bin(target).count('1') != ones_num:
        target += 1
    return target


# // Test
for n in [129, 127, 1, 323423]:
    print(next_higher(n))