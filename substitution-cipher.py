def substitution_cipher(cipher, text):
    result = ""
    for char in text:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(cipher[0].upper()) - 65 + ord(char) - 65) % 26 + 65)
            else:
                result += chr(
                    (ord(cipher[1].lower()) - 97 + ord(char.lower()) - 97) % 26 + 97
                )
        else:
            result += char
    return result


cipher = input().strip()
text = input().strip()
print(substitution_cipher(cipher, text))