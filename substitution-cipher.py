def substitution_cipher(cipher1, cipher2, message):
    mapping = {char1.lower(): char2.lower() for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += mapping.get(char, char)
            else:
                upper_case = mapping.get(char.lower()).upper()
                result += upper_case
        else:
            result += char
    return result