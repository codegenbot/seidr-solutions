def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for c2, c1 in zip(cipher2.lower(), cipher1.lower()):
        if c2.isalpha():
            mapping[c2] = c1
            mapping[c2.upper()] = c1.upper()
    
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower()).upper() if char.isupper() else mapping.get(char)
        else:
            result += char
    
    return result