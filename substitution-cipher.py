def substitution_cipher(cipher1, cipher2, message):
    cipher = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    return "".join([cipher[char] if char in cipher else char for char in message])