cipher = input()
message = input()
encrypted_message = input()

deciphered_message = ''
for char in encrypted_message:
    if char in cipher:
        index = cipher.index(char)
        deciphered_message += message[index]
    else:
        deciphered_message += char

print(deciphered_message)