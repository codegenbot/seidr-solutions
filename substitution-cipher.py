```
def decipher(cipher1, cipher2, message):
    mapping = {c.lower(): d for c,d in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += mapping.get(char, char)
            else:
                upper_char = char.upper()
                if upper_char in mapping:
                    result += mapping[upper_char].upper()
                else:
                    result += upper_char
        else:
            result += char
    return result