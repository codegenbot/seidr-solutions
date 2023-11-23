cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in cipher:
    index = mapping.find(char)
    if index != -1 and index < len(message):
        deciphered_message += message[index]
    else:
        deciphered_message += char

print(deciphered_message)