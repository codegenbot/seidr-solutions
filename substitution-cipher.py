def substitution_cipher(cipher, message):
    deciphered = "".join(
        [cipher[0][i] if i < len(cipher[0]) else "" for i in range(len(message))]
    )
    return deciphered