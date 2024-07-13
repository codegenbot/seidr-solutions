def substitution_cipher():
    cipher_map = [c1 for c1, c2 in zip(input(), input())]
    message = input()
    deciphered_message = "".join(
        [c for c in message if c in cipher_map] for _ in cipher_map
    )
    return deciphered_message