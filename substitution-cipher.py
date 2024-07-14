def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        for i in range(len(cipher1)):
            if cipher1[i] == char:
                deciphered_message += cipher2[i]
                break
    return deciphered_message


# Read input from user
cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, cipher2, message))