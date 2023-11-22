cipher = input()
decipher = input()
message = input()

deciphered_message = ""
for char in message:
    index = cipher.find(char)
    deciphered_message += decipher[index]

print(deciphered_message)