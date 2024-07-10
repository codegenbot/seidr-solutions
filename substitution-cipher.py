```
def decipher_cipher(cipher1, cipher2, message):
    mapping = {}
    for c1, c2 in zip(cipher1, cipher2):
        mapping[c1] = c2
    result = []
    for char in message:
        if char in mapping:
            result.append(mapping[char])
        else:
            result.append(char)
    return ''.join(result)