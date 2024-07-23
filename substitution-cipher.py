```
def substitution_cipher(cipher1, cipher2, message):
    mapping = {c1: c2 for c1, c2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result