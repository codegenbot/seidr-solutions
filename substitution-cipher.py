def substitution_cipher(cipher1, cipher2, message):
    cipher = dict(zip(cipher1, cipher2))
    return "".join([cipher.get(char, char) for char in message])