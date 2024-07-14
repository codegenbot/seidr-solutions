def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    mapping_upper = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c2.isalpha():
            if c2.isupper():
                mapping_upper[c2] = c1
            else:
                mapping[c2] = c1

    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char.lower() in mapping_upper: 
                    result += mapping_upper[char.lower()].upper()
                else: 
                    result += char
            else:
                if char.lower() in mapping: 
                    result += mapping[char.lower()]
                else: 
                    result += char
        else: 
            result += char
    return result