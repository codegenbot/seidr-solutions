def substitution_cipher():
    cipher_map = [c for c1, c2 in zip(input().strip(), input().strip())]
    message = input().strip()
    return "".join(
        [c for c in message if c in cipher_map]
        + [c for c in set(message) - set(cipher_map)]
    )


print(substitution_cipher())