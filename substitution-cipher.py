def substitute_cipher(cipher1, cipher2, message):
    deciphered = "".join(
        [
            cipher2[i]
            for i in range(len(message))
            if i < len(cipher1) and message[i] == cipher1[i]
        ]
    )
    return deciphered