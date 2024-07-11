def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            index = ord(char) - ascii_offset
            result += chr((ord(cipher2[index % len(cipher2)]) - ascii_offset))
        else:
            result += char
    return result