def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    deciphered_text = ""
    for char in text_to_decrypt:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            deciphered_text += cipher_text2[index]
        else:
            deciphered_text += char
    return deciphered_text.upper()