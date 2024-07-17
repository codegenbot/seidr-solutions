```
def substitution_cipher(cipher1, cipher2, message):
    mapping = {k: v for k, v in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result