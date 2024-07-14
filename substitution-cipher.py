def substitution_cipher(cipher, message):
    deciphered = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - 65
            deciphered += chr((ord(cipher[index].upper()) - 65) % 26 + 97)
        else:
            deciphered += char
    return deciphered


cipher1, cipher2, message = input().split()
print(substitution_cipher(cipher1, message))