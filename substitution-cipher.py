def substitution_cipher(cipher1, cipher2, message):
    mapping = {cipher2[i]: cipher1[i] for i in range(len(cipher2))}
    deciphered_message = "".join(mapping.get(char, char) for char in message)
    return deciphered_message