```
def substitution_cipher(cipher1, cipher2, message):
    decipher = {v: k for k, v in zip(cipher1, cipher2)}
    result = ''
    for char in message:
        if char in decipher:
            result += decipher[char]
        else:
            result += char
    return result