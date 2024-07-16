```
def substitution_cipher(cipher1, cipher2, message):
    result = ''
    for char in message:
        if char in cipher1.lower():
            index = cipher1.lower().index(char)
            if char.isupper():
                result += cipher2[index].upper()
            else:
                result += cipher2[index]
        else:
            result += char
    return result