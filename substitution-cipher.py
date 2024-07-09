def substitution_cipher(cipher_key1, cipher_key2, message):
    return "".join(
        [
            cipher_key2[i] if i < len(cipher_key1) and cipher_key1[i] == char else "X"
            for i, char in enumerate(message)
        ]
    )