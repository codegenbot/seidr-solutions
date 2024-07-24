def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher = {}
    for i in range(len(cipher_text1)):
        cipher[cipher_text2[i].lower()] = cipher_text1[i].lower()

    deciphered_message = ""
    for char in message.lower():
        if char.isalpha() and char in cipher:
            deciphered_message += cipher[char]
        else:
            deciphered_message += char

    return deciphered_message