def substitution_cipher(cipher1, cipher2, message):
    mapping = {c: c2 if c.isalpha() else c for c, c2 in zip(cipher1.lower(), cipher2.lower())}

    result = ""
    for char in message.lower():
        if char.isalpha():
            result += mapping.get(char, char)
        else:
            result += char