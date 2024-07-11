def decipher(cipher1, cipher2, message):
    mapping = {c1: c2 if c1.isalpha() else ' '  for c1,c2 in zip(cipher1.lower(), cipher2.lower())}
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char)
        else:
            result += char
    return result