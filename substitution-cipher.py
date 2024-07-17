def substitution_cipher(cipher, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            index = ord(char.lower()) - 97 if char.islower() else ord(char.lower()) - 65
            deciphered_message += (
                cipher[index].lower() if char.islower() else cipher[index].upper()
            )
        else:
            deciphered_message += char
    return deciphered_message


cipher1, cipher2, message = input().splitlines()
print(substitution_cipher(cipher1, message))