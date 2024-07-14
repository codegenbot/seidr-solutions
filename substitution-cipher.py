def substitution_cipher(cipher1, cipher2, message):
    lower_mapping = {c: c2 for c, c2 in zip(cipher1.lower(), cipher2.lower())}
    upper_mapping = {c.upper(): c2.upper() for c2 in set(c2 for c, c2 in zip(cipher1, cipher2))}
    
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += upper_mapping[char]
            else:
                result += lower_mapping.get(char, char)
        else:
            result += char
    return result