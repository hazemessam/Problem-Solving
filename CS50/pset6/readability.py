l, w, s = 0, 0, 0
head, nextHead = str(), str()
firstWord = True

text = input('Text: ')

for i in range(len(text) - 1):
    head = text[i]
    nextHead = text[i+1]
    if head.isalpha():
        l += 1
        if nextHead in ['.', '!', '?']:
            s += 1
        if firstWord:
            w += 1
            firstWord = False
    elif head.isspace() and (nextHead.isalpha() or nextHead == '\"'):
         w += 1

if s == 0:
    s += 1

print(f'L: {l}\nW: {w}\nS: {s}\n')

L = l / w * 100
S = s / w * 100
index = round(0.0588 * L - 0.296 * S - 15.8)
if index > 16:
    print('Grade 16+')
elif index < 1:
    print('Before Grade 1')
else:
    print(f'Grade {index}')