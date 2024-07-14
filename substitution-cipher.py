def substitution_cipher(cipher1, cipher2, message):
    mapping = {c.lower(): c2.lower() for c, c2 in zip(cipher1, cipher2)}

    result = ""
    for char in message:
        if char.isalpha():
            result += (
                mapping.get(char.lower(), char).upper()
                if char.isupper()
                else mapping.get(char.lower(), char)
            )
        else:
            result += char