def decipher(cipher1, cipher2, message):
    mapping = {c.lower(): c for c in cipher1}
    result = ""
    for char in message:
        if char.lower() in mapping:
            result += mapping[char.lower()]
    return result