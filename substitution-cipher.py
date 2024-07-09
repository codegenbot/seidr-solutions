```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char1, char2 in zip(cipher1, cipher2):
        if char1.isalpha():
            if char1.isupper():
                result += char2.upper()
            else:
                result += char2.lower()
        else:
            result += char1
    return result