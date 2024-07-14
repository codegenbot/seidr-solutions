```
def substitution_cipher(cipher_key1, cipher_key2, message):
    result = ""
    for char in message:
        if char in cipher_key1:
            index = cipher_key1.index(char)
            result += cipher_key2[index]
        else:
            result += char
    return result