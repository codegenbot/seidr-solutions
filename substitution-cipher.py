def substitution_cipher(cipher1, cipher2, message):
    result = ""
    mapping = {char: cipher2[i] for i, char in enumerate(cipher1)}
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result