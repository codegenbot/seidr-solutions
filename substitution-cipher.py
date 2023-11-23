cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in cipher:
    index = mapping.find(char)
    deciphered_message += message[index] if index != -1 and index < len(message) else char

print(deciphered_message)