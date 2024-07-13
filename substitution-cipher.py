def substitution_cipher():
    cipher_key = input().strip()
    message = input().strip()
    deciphered_message = "".join(
        [char for pair in zip(cipher_key, message) for char in pair]
    )
    return deciphered_message


print(substitution_cipher())