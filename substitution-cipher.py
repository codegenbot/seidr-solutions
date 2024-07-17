def substitution_cipher():
    cipher_map = str(input())
    message = str(input())
    deciphered_message = "".join(
        [cipher_map[i] for i in range(len(message)) if i < len(cipher_map)]
    )
    return deciphered_message