def substitution_cipher():
    key1, key2 = input(), input()
    cipher = {k: v for k, v in zip(key1, key2)}
    message = input()
    return "".join(
        cipher.get(c.lower(), c) if c.isalpha() else c
        for c in message
    )