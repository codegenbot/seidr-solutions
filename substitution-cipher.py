"""
def decipher(cipher1, cipher2, message):
    mapping = {c1.lower(): c2 if c1.islower() else c2.upper() for c1,c2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char)
        else:
            result += char
    return result
"""