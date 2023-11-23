cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in cipher:
    try:
        index = mapping.index(char)
        deciphered_message += message[index]
    except ValueError:
        deciphered_message += char

print(deciphered_message)