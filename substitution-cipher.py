```
def decipher(cipher1, cipher2, message):
    mapping = {}
    for k,v in zip(cipher1, cipher2):
        if k.isalpha():
            mapping[k.lower()] = v.lower() if v.islower() else v.upper()
        else:
            mapping[k] = v
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char)
        else:
            result += char
    return result