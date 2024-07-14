def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            mapping[c1] = c2
            mapping[c1.upper()] = c2.upper()
    
    result = ""
    for m, char in zip(message, cipher1):
        if char.isalpha() and char in mapping:
            result += mapping[char].upper() if char.isupper() else mapping[char]
        else:
            result += m

    return result