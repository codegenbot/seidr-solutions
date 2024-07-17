def substitution_cipher(cipher1, cipher2, message):
    mapping = {char: cipher2[i] for i, char in enumerate(cipher1)}
    deciphered_message = "".join(mapping.get(char, char) for char in message)
    return deciphered_message