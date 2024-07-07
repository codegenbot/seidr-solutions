def substitution_cipher(cipher_text1, cipher_text2, text):
    decipher_dict = {char: cipher_text2[i] for i, char in enumerate(cipher_text1)}
    deciphered_text = ""
    for char in text:
        deciphered_text += decipher_dict.get(char, char)
    return deciphered_text