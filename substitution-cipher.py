def substitution_cipher(cipher, message):
    deciphered = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - 65 if char.isupper() else ord(char.lower()) - 97
            deciphered += (
                cipher[index % len(cipher)].lower()
                if char.islower()
                else cipher[index % len(cipher)].upper()
            )
        else:
            deciphered += char
    return deciphered


cipher1, cipher2, message = input().splitlines()
print(substitution_cipher(cipher1, message))