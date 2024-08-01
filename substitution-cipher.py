```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                index = ord(char) - ord('A')
                result += chr((ord(cipher2[index]) - ord('A')) + ord('A'))
            else:
                index = ord(char) - ord('a')
                result += chr((ord(cipher2[index]) - ord('a')) + ord('a'))
        else:
            result += char
    return result