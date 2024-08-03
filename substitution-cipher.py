def substitution_cipher(cipher, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr(
                    (ord(cipher[0].upper()) - 65 + ord(char.upper())) % 26 + 65
                )
            else:
                result += chr(
                    (ord(cipher[0].lower()) - 97 + ord(char.lower())) % 26 + 97
                )
        else:
            result += char
    return result


cipher = input().strip()
message = input().strip()
print(substitution_cipher(cipher, message))