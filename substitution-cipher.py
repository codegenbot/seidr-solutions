def substitution_cipher(cipher, message):
    deciphered = "".join([cipher[i%len(cipher)] if i < len(message) else "" for i in range(len(message))])
    return deciphered