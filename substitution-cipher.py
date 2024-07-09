```
def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for i in range(len(cipher1)):
        if cipher1[i].isalpha():
            if cipher1[i].isupper():
                char = cipher1[i].upper()
            else:
                char = cipher1[i]
            if not cipher2[i] in mapping.values():
                mapping[cipher1[i]] = cipher2[i]

    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += next(value for key, value in mapping.items() if key.upper() == char)
            else:
                result += next(value for key, value in mapping.items() if key.lower() == char)
        else:
            result += char
    return result