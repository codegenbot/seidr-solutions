```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if ord('a') <= ord(char.lower()) <= ord('z') or 'A' <= ord(char.upper()) <= 'Z':
            index = cipher2.index(char.lower())
            result += cipher1[index].upper() if char.isupper() else cipher1[index]
        else:
            result += char
    return result