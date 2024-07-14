def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for c, c2 in zip(cipher1, cipher2):
        if c.isalpha():
            mapping[c] = c2
            mapping[c2] = c

    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += mapping.get(char.lower()).upper()
            else:
                result += mapping.get(char, char)
        else:
            result += char