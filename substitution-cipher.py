def decipher(cipher1, cipher2, message):
    mapping = {c: d for c,d in zip(cipher1.lower(), cipher2.lower())}
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += mapping.get(char, char)
            else:
                result += mapping.get(char.lower()).upper() if char.lower() in mapping else char
        else:
            result += char
    return result