def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                index = cipher1.index(char.upper())
            else:
                index = cipher1.index(char)
            result += cipher2[index].lower() if char.islower() else cipher2[index].upper()
        else:
            result += char
    return result