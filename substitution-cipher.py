def substitution_cipher(cipher1, cipher2, message):
    mapping = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    return "".join(mapping.get(char.lower(), char) for char in message)