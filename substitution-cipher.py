def substitution_cipher(cipher, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.lower()) - 97 if char.islower() else ord(char.lower()) - 65
            result += cipher[index % len(cipher)]
        else:
            result += char
    return result


cipher1, cipher2, message = input().split()
print(substitution_cipher(cipher1, message))