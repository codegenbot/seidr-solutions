def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher = {}
    for i in range(len(cipher_text1)):
        cipher[cipher_text1[i].lower()] = cipher_text2[i].lower()

    deciphered_message = """"
    for char in message:
        if char.lower() in cipher:
            deciphered_message += cipher[char.lower()]
        else:
            deciphered_message += char

    return deciphered_message