def substitution_cipher(cipher1, cipher2, message):
    mapping = {char: cipher2[i] for i, char in enumerate(cipher1)}
    result = ""
    for char in message:
        result += mapping.get(char, char)
    return result