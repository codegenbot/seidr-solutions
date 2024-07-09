```
def substitution_cipher(cipher1, cipher2, message):
    mapping = {c1: c2 for c1, c2 in zip(cipher1.lower(), cipher2.lower())}
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.lower()) - 97
            if char.isupper():
                result += mapping[cipher1[index].upper()].upper()
            else:
                result += mapping[cipher1[index]].lower()
        elif char in cipher1.lower():
            result += mapping[char]
        else:
            result += char
    return result