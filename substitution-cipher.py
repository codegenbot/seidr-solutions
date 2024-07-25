def substitution_cipher(cipher, message):
    deciphered_message = ""
    for char in message:
        if char in cipher[0]:
            index = cipher[0].index(char)
            deciphered_message += cipher[1][index]
        else:
            deciphered_message += char
    return deciphered_message


cipher = input().split()
message = input()

print(substitution_cipher(cipher, message))