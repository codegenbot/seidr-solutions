def substitution_cipher(cipher1, cipher2, message):
    mapping = {c: c2 if c.isalpha() else c for c, c2 in zip(cipher1, cipher2)}

    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char