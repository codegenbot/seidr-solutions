def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    return "".join([cipher_map.get(char, char) for char in message])