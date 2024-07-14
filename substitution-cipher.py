def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for c1, c2 in zip(cipher2.lower(), cipher1.lower()):
        if c1.isalpha():
            mapping[c1] = c2
            mapping[c1.upper()] = c2.upper()
    
    result = ""
    for char in message:
        if char.isalpha() and char in mapping:
            result += mapping[char].upper() if char.isupper() else mapping[char]
        else:
            result += char

    return result