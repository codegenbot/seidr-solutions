def substitution_cipher(cipher1, cipher2, message):
    mapping = {c.casefold(): c2.casefold() if c.isalpha() else c for c, c2 in zip(cipher1, cipher2)}

    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char].upper() if char.isupper() else mapping[char].lower()
        else:
            result += char

    return result