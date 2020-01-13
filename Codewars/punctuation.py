import string
def borrow(s):
    s = s.lower()
    new_str = ''
    punc_str = string.punctuation + ' '
    for char in s:
        if char not in punc_str:
            new_str += char
    return new_str

# Short Way
def borrow_v2(s):
    return ''.join([char for char in s.lower() if char not in string.punctuation + ' '])

print(borrow_v2('Hazem Essam Kwita!'))
