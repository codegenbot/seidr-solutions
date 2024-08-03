```
def decipher(cipher1, cipher2, text):
    mapping = {}
    for char1, char2 in zip(cipher1, cipher2):
        if char1 != char2:
            mapping[char1] = char2
    result = ""
    for char in text:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result