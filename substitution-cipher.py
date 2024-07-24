def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher = {}
    for i in range(len(cipher_text1)):
        cipher[cipher_text1[i]] = cipher_text2[i]

    deciphered_message = ""
    for char in message:
        if char in cipher:
            deciphered_message += cipher[char]
        else:
            deciphered_message += char

    return deciphered_message