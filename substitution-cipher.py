def substitution_cipher(cipher_input):
    cipher = {c: d for c, d in zip(cipher_input[0].lower(), cipher_input[1].lower())}
    message = cipher_input[2]

    deciphered_message = "".join(
        [
            cipher.get(char.lower(), char) if char.isalpha() else char
            for char in message
        ]
    )

    return deciphered_message