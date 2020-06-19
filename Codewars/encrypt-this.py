def encrypt_this(text):
    encrypt_msg = list()
    words = text.split()
    for word in words:
        letters = list(word)
        letters[0] = str(ord(word[0]))
        if len(word) > 2:
            letters[1], letters[-1] = letters[-1], letters[1]
        encrypt_word = ''.join(letters)
        encrypt_msg.append(encrypt_word)
    return ' '.join(encrypt_msg)

print(encrypt_this('A wise old owl lived in an oak'))
