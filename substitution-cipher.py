def substitution_cipher(cipher, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - ord("A")
            if cipher[0].isupper():
                result += chr((index + 1) % 26 + ord("A"))
            else:
                result += chr((index + 1) % 26 + ord("a")) if char.islower() else " "
        else:
            result += char
    return result


cipher = input().strip()
message = input().strip()
print(substitution_cipher(cipher, message))