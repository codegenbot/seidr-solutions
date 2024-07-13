def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]
    return "".join([cipher.get(char, char) for char in message])