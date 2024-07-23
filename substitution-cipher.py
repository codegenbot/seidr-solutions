def substitution_cipher(cipher1, cipher2, message):
    mapping = {char1: char2 for char1, char2 in zip(cipher1, cipher2) if char1 and char2}
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result