```
def substitution_cipher(cipher_map1, cipher_map2, message):
    result = ""
    for char in message:
        if char in cipher_map1:
            index = cipher_map1.index(char)
            result += cipher_map2[index]
        else:
            result += char
    return result