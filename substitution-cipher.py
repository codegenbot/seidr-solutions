def decipher(cipher1, cipher2, message):
    mapping = {cipher1[i].lower(): cipher2[i] for i in range(len(cipher1))}
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += mapping.get(char, char).lower()
            else:
                result += mapping.get(char.upper(), char).upper()
        else:
            result += char
    return result