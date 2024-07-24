def substitution_cipher(input_strings):
    cipher_key = input_strings[0]
    message_to_decipher = input_strings[2]

    deciphered_message = "".join(
        [
            cipher_key[i] if i < len(cipher_key) else " "
            for i in range(len(message_to_decipher))
        ]
    )

    return deciphered_message