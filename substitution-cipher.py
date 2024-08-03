def substitution_cipher(cipher1, cipher2, text):
    cipher_dict = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    deciphered_text = "".join([cipher_dict.get(char, char) for char in text])
    return deciphered_text