def decipher(cipher1, cipher2, message):
    mapping = {c: v for c, v in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += mapping[char.lower()].upper()
            else:
                result += mapping.get(char, char)
        else:
            result += char
    return result