def substitution_cipher():
    cipher_map = [c for c1, c2 in zip(input().strip(), input().strip())]
    message = list(input().strip())
    return "".join(
        [c for c in map(lambda x: next((y for y in cipher_map if y == x), x), message)]
    )


print(substitution_cipher())