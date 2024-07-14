def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            mapping[c1] = c2
            mapping[c1.upper()] = c2.upper()
    
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in mapping:
                result += mapping[char.lower()].upper() if char.isupper() else mapping[char.lower()]
            else:
                result += char
        else:
            result += char