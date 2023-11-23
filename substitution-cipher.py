cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in message:
    if char in mapping:
        index = mapping.index(char)
        deciphered_message += cipher[index]
    else:
        deciphered_message += char

print(deciphered_message)