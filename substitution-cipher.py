def decipher_cipher(cipher1, cipher2, message):
    all_chars = set(cipher1 + cipher2)
    mapping = {char: cipher2[cipher1.index(char)] for char in all_chars}
    return "".join(mapping.get(char, char) for char in message)