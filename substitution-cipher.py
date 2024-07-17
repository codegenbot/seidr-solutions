def decipher_cipher(cipher1, cipher2, text):
    mapping = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    return "".join(mapping.get(char, char) for char in text)