def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for a, b in zip(cipher1, cipher2):
        if a != b:
            mapping[a] = b
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result