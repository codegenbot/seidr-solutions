def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = ""
    for c1, c2 in zip(cipher_text1, cipher_text2):
        for char in text:
            if char == c1:
                deciphered_text += c2
                break
        else:
            deciphered_text += char
    return deciphered_text