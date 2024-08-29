def substitution_cipher(cipher_text1, cipher_text2, text_to_decipher):
    deciphered_text = ""
    for char in text_to_decipher:
        index = ord(char) - ord("a")
        if index < len(cipher_text1) and index < len(cipher_text2):
            deciphered_text += cipher_text2[cipher_text1.index(chr(ord("a") + index))]
        else:
            deciphered_text += char
    return deciphered_text