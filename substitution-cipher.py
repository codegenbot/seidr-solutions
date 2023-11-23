cipher = input()
message = input()
encrypted_message = input()

deciphered_message = ''
for char in encrypted_message:
    if char in message:
        index = message.index(char)
        deciphered_message += cipher[index]
    else:
        deciphered_message += char

print(deciphered_message)