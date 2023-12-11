def substitution_cipher(cipher, message):
    deciphered = ""
    for i in range(len(message)):
        deciphered += cipher[i]
    return deciphered