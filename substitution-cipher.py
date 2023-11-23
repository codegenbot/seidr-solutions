cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in message:
    try:
        index = mapping.index(char)
        deciphered_message += cipher[index]
    except ValueError:
        deciphered_message += char

print(deciphered_message)