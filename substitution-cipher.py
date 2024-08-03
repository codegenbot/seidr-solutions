def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char in cipher2:
            index = cipher2.index(char)
            deciphered_message += cipher1[index]
        else:
            deciphered_message += char
    return deciphered_message