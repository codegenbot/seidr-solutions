def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = cipher1.index(char.upper())
            if char.isupper():
                result += cipher2[index].upper()
            else:
                result += cipher2[index].lower()
        else:
            result += char
    return result