def substitution_cipher(cipher, message):
    deciphered = ""
    for i in range(len(message)):
        deciphered += cipher[i % len(cipher)]
    return deciphered