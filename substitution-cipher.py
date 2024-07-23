def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    cipher_dict = {k: v for k, v in zip(cipher_text1, cipher_text2)}
    deciphered_text = "".join(cipher_dict.get(char, char) for char in text_to_decrypt)
    return deciphered_text.upper()