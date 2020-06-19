def rot13(message):
    rot = ''
    for l in message:
        if l.isupper():
            if ord(l) <= 77:
                rot += chr(ord(l) + 13)
            else:
                rot += chr(ord(l) - 13)
        elif l.islower():
            if ord(l) <= 109:
                rot += chr(ord(l) + 13)
            else:
                rot += chr(ord(l) - 13)
        else:
            rot += l
    return rot

print(rot13('HAZEM&essam'))