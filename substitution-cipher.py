cipher = input()
mapping = input()
message = input()

deciphered_message = ""
for char in message:
    index = cipher.find(char)
    deciphered_message += mapping[index]

print(deciphered_message)