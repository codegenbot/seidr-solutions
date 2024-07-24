def substitution_cipher(cipher, message):
    deciphered = ""
    for char in message:
        if char in cipher[0]:
            index = cipher[0].index(char)
            deciphered += cipher[1][index]
        else:
            deciphered += char
    return deciphered


cipher = input().split()
message = input()
print(substitution_cipher(cipher, message))