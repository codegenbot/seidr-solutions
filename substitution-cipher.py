def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {k.lower(): v for k, v in zip(cipher1, cipher2)}
    cipher_dict.update(
        {
            (k if k.isalpha() else "").lower(): (v if v.isalpha() else "").upper()
            for k, v in zip(
                [i.lower() if i.isalpha() else "" for i in cipher1],
                [i.upper() if i.isalpha() else "" for i in cipher2],
            )
        }
    )
    return "".join(
        [
            " " + (char.upper() if not char.isalnum() else char).replace(" ", "")
            for char in message
        ]
    )