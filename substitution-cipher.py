def substitution_cipher(cipher1, cipher2, message):
    mapping = {c.lower(): c2 for c, c2 in zip(cipher1, cipher2)}

    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += mapping.get(char.lower(), char)
            else:
                result += mapping.get(char.lower(), char).upper()
        else:
            result += char