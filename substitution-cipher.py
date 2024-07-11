def decipher(cipher1, cipher2, message):
    deciphering_mapping = {c2: c1 if c2.isupper() else c1.lower() for c1, c2 in zip(cipher2, cipher1)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += deciphering_mapping.get(char.lower(), char).upper()
            else:
                result += deciphering_mapping.get(char, char)
        else:
            result += char
    return result