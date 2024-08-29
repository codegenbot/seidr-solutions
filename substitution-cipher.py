def decipher_cipher(cipher_keys, cipher_values, message):
    return "".join(
        [
            cipher_value
            for cipher_key, cipher_value in zip(cipher_keys, cipher_values)
            if cipher_key in message
        ]
        + [
            cipher_value[0] if cipher_key not in message else cipher_key[0]
            for cipher_key, cipher_value in zip(message, cipher_values)
        ]
    )