cipher1 = input()
cipher2 = input()
message = input()

deciphered_message = ""
for char in message:
    if char in cipher1:
        deciphered_message += cipher2[cipher1.index(char)]
    else:
        deciphered_message += char

print(deciphered_message)