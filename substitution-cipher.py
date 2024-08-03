def decipher_cipher(cipher_text1, cipher_text2, text_to_decipher):
    cipher = {}
    for i in range(len(cipher_text1)):
        cipher[cipher_text1[i]] = cipher_text2[i]

    deciphered_text = ""
    for char in text_to_decipher:
        if char in cipher:
            deciphered_text += cipher[char]
        else:
            deciphered_text += char

    return deciphered_text