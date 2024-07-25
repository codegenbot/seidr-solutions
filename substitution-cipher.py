def substitution_cipher():
    cipher_map = [c for c1, c2 in zip(input(), input())]
    message = input()
    return "".join(
        [c for c in message if c in cipher_map]
        for c in map(lambda x: next((y for y in cipher_map if y == x), None), message)
    )


print(substitution_cipher())