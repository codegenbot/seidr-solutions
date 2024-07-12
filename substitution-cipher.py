def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher = {c1: c2 for c1, c2 in zip(cipher_text1, cipher_text2)}
    return "".join([cipher.get(char, char) for char in message])