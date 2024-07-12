```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            pos = ord(char.upper()) - ord('A')
            new_pos = (pos + ord(cipher2[0].upper()) - ord(cipher1[0].upper())) % 26
            if char.islower():
                result += chr(ord('a') + new_pos)
            else:
                result += chr(ord('A') + new_pos)
        else:
            result += char
    return result