def substitution_cipher(cipher1, cipher2, message):
    mapping = {c1: c2 for c1, c2 in zip(cipher1, cipher2)}
    result = ''.join(mapping.get(char.lower(), char).lower() if char.isalpha()
                     else mapping.get(char.upper(), char).upper()
                     if char.isalpha() else char
                     for char in message)
    return result