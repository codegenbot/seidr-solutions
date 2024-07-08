def substitution_cipher(cipher_input):
    cipher = [c for c in cipher_input[0] if c.isalpha()]
    message = cipher_input[2]

    deciphered_message = "".join(
        [
            char
            for char in message
            if char.isalpha() and char.lower() in [c.lower() for c in cipher]
        ]
    )

    return deciphered_message