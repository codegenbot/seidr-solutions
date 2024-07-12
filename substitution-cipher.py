cipher = input()
plain = input()
message = input()

deciphered_message = ""
for char in message:
    index = cipher.find(char)
    deciphered_message += plain[index]

print(deciphered_message)