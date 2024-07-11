def decipher(cipher1, cipher2, message):
    mapping = {char: cipher2[i] for i, char in enumerate(cipher1)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in mapping:
                result += mapping[char.lower()].upper() if char.isupper() else mapping[char.lower()]
        else:
            result += char
    return result