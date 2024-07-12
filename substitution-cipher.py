cipher1 = input().strip()
cipher2 = input().strip()
message = input().strip()

deciphered_message = ""
for char in message:
    if char in cipher2:
        index = cipher2.index(char)
        deciphered_message += cipher1[index]
    else:
        deciphered_message += char

print(deciphered_message)