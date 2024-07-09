def substitution_cipher(cipher1, cipher2, message):
    mapping = dict(zip(cipher1, cipher2))
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.upper(), char).upper() if char.isupper() else mapping.get(char.lower(), char).lower()
        else:
            result += char
    return result