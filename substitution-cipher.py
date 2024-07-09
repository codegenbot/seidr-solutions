def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                index = [i for i, x in enumerate(cipher1) if x == char.upper()][0]
                result += cipher2[index].upper()
            else:
                index = [i for i, x in enumerate(cipher1) if x == char.lower()][0]
                result += cipher2[index].lower()
        else:
            result += char
    return result