def substitution_cipher(cipher1, cipher2, message):
    cipher_lower = {k.lower(): v for k, v in zip(cipher1, cipher2)}
    cipher_upper = {
        k.upper(): v.upper()
        for k, v in zip(
            [i.lower() if i.isalpha() else "" for i in cipher1],
            [i.upper() if i.isalpha() else "" for i in cipher2],
        )
    }

    return "".join(
        [
            (
                cipher_lower.get(char.lower(), char).upper()
                if (char.isalpha() and not char.isupper())
                else (
                    cipher_upper.get(char.upper(), char).lower()
                    if char.isupper()
                    else cipher_lower.get(char.lower(), char)
                )
            )
            for char in message
        ]
    )