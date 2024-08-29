```
def decipher_cipher(cipher1, cipher2, message):
    mapping = {}
    for i in range(len(cipher1)):
        if cipher1[i] != cipher2[i]:
            mapping[cipher1[i]] = cipher2[i]
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result