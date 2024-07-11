```
message = input("Enter the message: ")
cipher1 = input("Enter cipher 1: ")
cipher2 = input("Enter cipher 2: ")

result = ""
for char in message.lower():  
    if char in cipher1.lower():  
        index = cipher1.index(char)
        result += cipher2[index]
    else:
        result += char

print(result)