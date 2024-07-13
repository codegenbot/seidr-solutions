def substitution_cipher(cipher, message):
    deciphered_message = "".join(
        [cipher[i] if i < len(cipher) else "" for i in range(len(message))]
    )
    return deciphered_message