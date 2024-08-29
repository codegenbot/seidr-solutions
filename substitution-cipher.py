def decipher(cipher_a, cipher_b, text):
    mapping = {char: cipher_b[i] for i, char in enumerate(cipher_a)}
    result = "".join(mapping.get(char, char) for char in text)
    return result