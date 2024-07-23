def substitution_cipher(cipher1, cipher2, message):
    mapping = {char: cipher2[i] for i, char in enumerate(cipher1)}
    return ''.join(mapping.get(char, char) for char in message)