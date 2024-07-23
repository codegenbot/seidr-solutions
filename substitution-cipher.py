def decipher_message(cipher1, cipher2, message):
    mapping = {c.lower(): d.lower() for c, d in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char)
        else:
            result += char
    return result