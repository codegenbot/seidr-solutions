def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        for i in range(len(cipher1)):
            if cipher1[i] == char:
                deciphered_message += cipher2[i]
    return deciphered_message