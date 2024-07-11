message = input("Enter the message: ")
result = ""
for char in message.lower():
    if char in cipher1.lower():
        index = cipher1.index(char)
        result += cipher2[index]
    else:
        result += char