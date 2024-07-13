def substitution_cipher(cipher, message):
    deciphered = "".join(
        [cipher[i] if i < len(cipher) else "" for i in range(len(message))]
    )
    return deciphered