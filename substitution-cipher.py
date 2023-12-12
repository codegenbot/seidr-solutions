cipher = input()
decipher = input()
message = input()

deciphered_message = ""
for char in message:
    if char in cipher:
        index = cipher.index(char)
        deciphered_message += decipher[index]
    else:
        deciphered_message += char

print(deciphered_message)