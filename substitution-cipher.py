```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - ord("A")
            is_upper = char.isupper()
            result += (cipher2[index] if is_upper else cipher2[index].lower())
        else:
            result += char
    return result