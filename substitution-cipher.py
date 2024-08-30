def substitution_cipher(cipher1, cipher2, text):
    deciphered = "".join(
        [cipher2[i] if i < len(cipher2) else "" for i in range(len(text))]
    )
    return deciphered