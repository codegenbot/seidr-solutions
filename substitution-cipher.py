def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha() and c2.isalpha():
            mapping[c1] = c2
            mapping[c1.upper()] = c2.upper()
    
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char).upper() if char.isupper() else mapping.get(char, char)
        else:
            result += char
    
    return result