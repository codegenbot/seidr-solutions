def substitution_cipher(cipher1, cipher2, message):
    mapping = {c.lower(): c2.lower() if c.isalpha() else c for c, c2 in zip(cipher1.lower(), cipher2.lower())}
    mapping = dict((k.upper(), v) if not k.isalpha() else (k, v) for d in [mapping] for k, v in d.items())

    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char).upper() if char.isupper() else mapping.get(char.lower(), char)
        else:
            result += char