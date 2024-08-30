```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = (cipher1.lower().index(char.lower())) % len(cipher1)
            result += cipher2[index].upper() if char.isupper() else cipher2[index].lower()
        else:
            result += char
    return result