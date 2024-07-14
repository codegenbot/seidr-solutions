def substitution_cipher(cipher1, cipher2, message):
    mapping_upper = {c: c2 for c, c2 in zip(cipher1.lower(), cipher2.lower())}
    mapping_lower = {c: c2 for c, c2 in zip([c if not c.isupper() else '' for c in cipher1], [c2 if not c2.isupper() else '' for c2 in cipher2.lower()])}

    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += mapping_upper.get(char.lower(), char).upper()
            else:
                result += mapping_lower.get(char, char)
        else:
            result += char