def substitution_cipher(cipher, message):
    deciphered = "".join([cipher[message[i]] if i < len(message) else "" for i in range(len(message))])
    return deciphered