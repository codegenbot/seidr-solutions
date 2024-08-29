def substitution_cipher(cipher1, cipher2, message):
    deciphered = ""
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            deciphered += cipher2[index]
        else:
            deciphered += char
    return deciphered