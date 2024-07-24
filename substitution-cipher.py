cipher1 = input().strip()
cipher2 = input().strip()
message = input().strip()

deciphered_message = ""
for char in message:
    index = cipher2.index(char)
    deciphered_message += cipher1[index]

print(deciphered_message)