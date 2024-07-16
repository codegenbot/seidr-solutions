def substitution_cipher(cipher1, cipher2, message):
    cipher = str(cipher2)[str(cipher1).index(str(cipher))]
    return "".join([cipher[i] if i < len(message) else "" for i in range(len(message))])