def substitution_cipher(cipher1, cipher2, message):
    mapping = {c: c2 if c.isalpha() else c for c, c2 in zip(cipher1.lower(), cipher2.lower())}
    mapping.update({c.upper(): c2.upper() for c, c2 in zip(cipher1.upper(), cipher2.upper())})

    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char).upper() if char.isupper() else mapping.get(char.lower(), char)
        else:
            result += char