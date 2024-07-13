def substitution_cipher(cipher1, cipher2, message):
    mapping = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    deciphered_message = "".join(mapping.get(c := c.lower() if c.isalpha() else c, c) for c in message)
    return deciphered_message