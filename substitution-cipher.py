def decipher(cipher1, cipher2, message):
    mapping = {c1: c2 for c1,c2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char).upper() if char.isupper() else mapping.get(char, char)
        else:
            result += char
    return result