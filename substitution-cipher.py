def decipher(cipher1, cipher2, message):
    mapping = {c.lower(): d for c,d in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in mapping:
                result += mapping[char.lower()] if char.islower() else mapping[char.lower()].upper()
            else:
                result += char
    return result