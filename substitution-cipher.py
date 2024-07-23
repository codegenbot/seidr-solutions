def substitution_cipher(cipher1, cipher2, message):
    cipher = {cipher1[i]: cipher2[i] for i in range(min(len(cipher1), len(cipher2)))}
    return "".join([cipher.get(char, char) for char in message])