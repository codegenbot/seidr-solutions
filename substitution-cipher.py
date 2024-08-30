def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            deciphered_message += cipher2[index]
        else:
            deciphered_message += char
    return deciphered_message

cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string: ")
message = input("Enter the message to be decrypted: ")

print(substitution_cipher(cipher1, cipher2, message))