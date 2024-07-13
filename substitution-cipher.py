```
def substitution_cipher(cipher_map1, cipher_map2, message):
    deciphered_message = ""
    for char in message:
        if char in cipher_map1:
            index = cipher_map1.index(char)
            deciphered_message += cipher_map2[index]
        else:
            deciphered_message += char
    return deciphered_message