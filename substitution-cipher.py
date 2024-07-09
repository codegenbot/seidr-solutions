def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += cipher2[(cipher1.upper().index(char))].upper()
            else:
                result += cipher2[(cipher1.lower().index(char))].lower()
        else:
            result += char
    return result