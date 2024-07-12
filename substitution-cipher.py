def substitution_cipher(cipher1, cipher2, message):
    cipher = {a: b for a, b in zip(cipher2, cipher1)}
    deciphered_message = "".join([cipher.get(char, char) for char in reversed(message)])
    return deciphered_message