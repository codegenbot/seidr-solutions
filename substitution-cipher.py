```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for i, char in enumerate(message):
        if i < len(cipher1) and char in cipher1:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += char
    return result