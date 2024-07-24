def substitution_cipher(cipher_map1, cipher_map2, message):
    result = ""
    for char in message:
        if char in cipher_map1:
            result += cipher_map2[cipher_map1.index(char)]
        else:
            result += char
    return result