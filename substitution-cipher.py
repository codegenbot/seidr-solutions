```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1.lower():
            index = cipher1.index(char)
            result += cipher2[index].lower() if char.isupper() else cipher2[index].upper()
        else:
            result += char
    return result