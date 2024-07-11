```
def decipher(cipher1, cipher2, message):
    mapping = {}
    for k,v in zip(cipher1, cipher2):
        if v.isalpha():
            if k.islower():
                mapping[k] = v.lower()
            else:
                mapping[k] = v.upper()

    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char

    return result