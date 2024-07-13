def decipher(cipher1, cipher2, message):
    return "".join(
        [
            cipher2[i]
            for i in range(len(message))
            if i < len(cipher1) and cipher1[i] == message[i]
        ]
    )