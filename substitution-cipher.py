def decipher_message(cipher1, cipher2, message):
    for c1, c2 in zip(cipher1, cipher2):
        if c1.isupper() and c2.isupper():
            case = 'UPPER'
            map = str.maketrans({c1: c2})
        elif c1.islower() and c2.islower():
            case = 'LOWER'
            map = str.maketrans({c1: c2})
        else:
            case = 'MIXED'
            map1 = str.maketrans({c1.upper(): c2.upper()})
            map2 = str.maketrans({c1.lower(): c2.lower()})

    if case == 'UPPER':
        result = message.translate(map)
    elif case == 'LOWER':
        result = message.translate(map)
    else:
        result_upper = message.translate(map1).upper()
        result_lower = message.translate(map2).lower()
        result = ''
        for char in result_upper:
            if char.isalpha():
                if char.lower() in result_lower:
                    result += char
                else:
                    result += char

    return result