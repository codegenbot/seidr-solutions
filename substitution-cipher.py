```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    mapping = {}
    for i in range(len(cipher1)):
        mapping[cipher1[i]] = cipher2[i]
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result