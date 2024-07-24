```
def substitution_cipher(input_strings):
    cipher_key = input_strings[0]
    message_to_decipher = input_strings[2]

    deciphered_message = "".join(
        [
            c if i < len(cipher_key) and c == cipher_key[i] else c
            for i, c in enumerate(message_to_decipher)
        ]
    )

    return deciphered_message