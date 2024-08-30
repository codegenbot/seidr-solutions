def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for char in zip(cipher1, cipher2):
        if char[0] != char[1]:
            mapping[char[0]] = char[1]
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result