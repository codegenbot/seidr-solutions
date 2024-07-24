cipher1 = input()
cipher2 = input()
message = input()

deciphered_message = ""
for char in message:
    if char in cipher2:
        index = cipher2.index(char)
        deciphered_message += cipher1[index]
    else:
        deciphered_message += char

print(deciphered_message)