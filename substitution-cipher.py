```Python
def decipher(cipher1, cipher2, message):
    mapping = {c.lower(): c for c in cipher1}
    result = ""
    for char in message:
        if char.isalpha() and (char.lower() in mapping or char.upper() in mapping):
            if char.islower():
                result += mapping[char.lower()]
            else:
                result += mapping[char.lower()].upper()
        else:
            result += char
    return result