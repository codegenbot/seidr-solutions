def substitution_cipher(cipher, message):
    deciphered = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - ord("A")
            deciphered += chr((index + cipher[index % 26]) % 26 + ord("A"))
        else:
            deciphered += char
    return deciphered


cipher1, cipher2, message = input().split()
print(substitution_cipher(int(cipher1), cipher2))