def decipher(cipher1, cipher2, message):
    mapping = {c.lower(): d for c,d in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping[char.lower()].upper() if char.isupper() else mapping[char.lower()]
        else:
            result += char
    return result