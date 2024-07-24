def decipher(cipher1, cipher2, message):
    mapping = {cipher1[i]: cipher2[i] for i in range(min(len(cipher1), len(cipher2)))}
    return "".join(mapping.get(char, char) for char in message)