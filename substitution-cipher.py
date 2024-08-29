```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - 65 if char.isupper() else ord(char.lower()) - 97
            result += cipher2[index] if char.isupper() else cipher2[index].lower()
        else:
            result += char
    return result