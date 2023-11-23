cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in message:
    index = mapping.find(char)
    if index != -1:
        deciphered_message += cipher[index]
    else:
        deciphered_message += char

print(deciphered_message)