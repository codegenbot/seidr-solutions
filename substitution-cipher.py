```
message = input("Enter the message: ")
cipher1 = input("Enter cipher1: ").lower()
cipher2 = input("Enter cipher2: ").lower()

result = ""
for char in message.lower():
    if char in cipher1:
        index = cipher1.index(char)
        result += cipher2[index]
    else:
        result += char

print(result)