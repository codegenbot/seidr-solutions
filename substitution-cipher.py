def substitution_cipher(cipher1, cipher2, message):
    mapping = {c: c2 for c, c2 in zip(cipher1.lower(), cipher2.lower())}

    result = ""
    for char in message:
        if char.isalpha():
            char = char.lower()
            if char in mapping:
                if char.isupper():
                    result += mapping[char].upper()
                else:
                    result += mapping[char]
            else:
                result += char
        else:
            result += char