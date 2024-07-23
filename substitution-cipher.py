def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {}
    for k, v in zip(cipher1.lower(), cipher2):
        if k.isalpha():
            cipher_dict[k] = v

    return "".join(
        [
            (
                cipher_dict.get(char.lower()).upper() if char.isalpha()
                else (char if not char.isalpha() else (char if char.islower() else char.upper()))
            )
            for char in message
        ]
    )