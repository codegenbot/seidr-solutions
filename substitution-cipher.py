cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in message:
    try:
        index = cipher.index(char)
        deciphered_message += mapping[index]
    except ValueError:
        deciphered_message += char

print(deciphered_message)