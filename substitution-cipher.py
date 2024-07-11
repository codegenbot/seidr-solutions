def decipher(cipher1, cipher2, message):
    mapping = {char: cipher2[i] for i, char in enumerate(cipher1)}
    result = ""
    for char in message.lower():
        if char in mapping:
            result += mapping[char]
    return result