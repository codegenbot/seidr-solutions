```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - ord("A")
            if char.isupper():
                result += chr(ord(cipher1[index].upper()) + (ord("A") - ord("A")))
            else:
                result += chr(ord(cipher1[index].lower()) + (ord("a") - ord("a")))
        else:
            result += char
    return result