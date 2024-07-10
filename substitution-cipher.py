def substitution_cipher(cipher1, cipher2, message):
    deciphered = ""
    for char in message:
        if char in cipher1:
            deciphered += cipher2[cipher1.index(char)]
        else:
            deciphered += char
    return deciphered