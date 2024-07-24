def substitution_cipher(cipher1, cipher2, message):
    mapping = str.maketrans({char: cipher2[i] for i, char in enumerate(cipher1)})
    decrypted_message = "".join([cipher2[cipher1.index(char)] if char in cipher1 else char for char in message])
    return decrypted_message