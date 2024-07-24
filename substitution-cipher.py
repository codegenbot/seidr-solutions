def substitution_cipher(cipher_text1, cipher_text2, message):
    return "".join(
        [
            (
                cipher_text2[i]
                if i < len(cipher_text1) and cipher_text1[i] == char
                else char
            )
            for i, char in enumerate(message)
        ]
    )