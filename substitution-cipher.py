```
def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c2.isalpha():
            if c1 not in mapping:
                mapping[c1] = c2

    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in mapping: 
                result += mapping[char.lower()].upper() if char.isupper() else mapping[char.lower()]
            else: 
                result += char
        else: 
            result += char
    return result