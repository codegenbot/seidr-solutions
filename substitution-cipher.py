import itertools

def substitution_cipher(cipher_text1, cipher_text2, text):
    cipher_dict = dict(zip_longest(cipher_text1, cipher_text2, fillvalue=''))
    deciphered_text = "".join([cipher_dict.get(char, char) for char in text])
    return deciphered_text