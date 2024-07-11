def substitution_cipher(cipher1, cipher2, text):
    mapping = {k: v for k, v in zip(cipher1, cipher2)}
    return "".join(mapping.get(char, char) for char in text)