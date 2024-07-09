def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = ""
    for char in text:
        if char in cipher_text1 and char in cipher_text2:
            index = cipher_text2.index(char)
            deciphered_text += cipher_text1[index]
        else:
            deciphered_text += char
    return deciphered_text