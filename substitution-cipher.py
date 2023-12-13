cipher = input()
decipher = input()
message = input()

result = ""
for char in message:
    index = cipher.find(char)
    result += decipher[index]

print(result)