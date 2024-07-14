def substitution_cipher(cipher_keys, cipher_values, message):
    return "".join(
        [
            cipher_value
            for cipher_key, cipher_value in zip(cipher_keys, cipher_values)
            if cipher_key in message
        ]
        + [
            value
            for key in message
            for value in cipher_values
            if key not in cipher_keys
        ]
    )