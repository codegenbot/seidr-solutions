def substitution_cipher(cipher_text1, cipher_text2, text_to_decipher):
    deciphered_text = ""
    for char in text_to_decipher:
        for i in range(len(cipher_text1)):
            if char == cipher_text1[i]:
                deciphered_text += cipher_text2[i]
                break
        else:
            deciphered_text += char
    return deciphered_text