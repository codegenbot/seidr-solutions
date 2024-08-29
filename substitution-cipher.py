def substitution_cipher(cipher_text1, cipher_text2, text_to_decipher):
    deciphered_text = ""
    for char in text_to_decipher:
        index = ord(char) - ord("a")
        deciphered_text += cipher_text2[index]
    return deciphered_text