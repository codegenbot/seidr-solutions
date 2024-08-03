def substitution_cipher(cipher1, cipher2, message):
    cipher = str()
    for char in cipher1:
        if char in cipher2:
            cipher += cipher2[cipher2.index(char)]
        else:
            cipher += char
    deciphered_message = str()
    for char in message:
        if char in cipher:
            deciphered_message += cipher[cipher.index(char)]
        else:
            deciphered_message += char
    return deciphered_message