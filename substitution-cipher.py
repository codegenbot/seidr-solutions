def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                index = ord(char) - 65
                result += chr((ord(cipher2[index]) - 65))
            else:
                index = ord(char) - 97
                result += chr((ord(cipher2[index]) - 97))
        else:
            result += char
    return result