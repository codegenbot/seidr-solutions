def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        index = cipher2.index(char)
        deciphered_message += cipher1[index]
    return deciphered_message

cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, cipher2, message))