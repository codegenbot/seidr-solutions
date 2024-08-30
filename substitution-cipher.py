def substitution_cipher():
    cipher = [ord(c2) - ord(c1) for c1, c2 in zip(input(), input())]
    message = input()
    return "".join(
        chr((ord(c) + cipher[i % len(cipher)]) % 256).lower() if c.isalpha() else c
        for i, c in enumerate(message)
    )