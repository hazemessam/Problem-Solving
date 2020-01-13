def duplicate_encode(word):
    word = word.lower()    
    lst = []
    lst.extend(word)
    counts = dict()
    for item in lst:
        counts[item] = counts.get(item, 0) + 1
    out_lst = []
    for char in word:
        if counts[char] == 1: 
            out_lst.append('(')
        else: 
            out_lst.append(')')
    out_str = ''.join(out_lst)
    return out_str

#short way
def duplicate_encode_v2(word):
    word = word.lower()
    return ''.join(['(' if word.count(char) == 1 else ')' for char in word]) 

for i in range(3):
    txt = input('>>> ')
    print(duplicate_encode_v2(txt))
