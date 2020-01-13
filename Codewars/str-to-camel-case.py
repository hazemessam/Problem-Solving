def to_camel_case(text):
    punc_str = '-_ '
    l = list(text)
    for i in range(1, len(l) - 1):
        if l[i] in punc_str:
            l[i+1] = l[i+1].upper()
    for chr in l:
        if chr in punc_str:
            l.remove(chr)
    return ''.join(l)

test = 'Hazem-essam_kwita'
print(to_camel_case(test))
