def substitution_cipher(cipher1, cipher2, message):
    cipher = {k: v for k, v in zip(cipher1, cipher2)}
    deciphered_message = "".join([cipher.get(char, char) for char in message])
    return deciphered_message