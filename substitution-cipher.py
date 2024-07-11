```
def decipher(cipher1, cipher2, message):
    result = ''
    for char in message.lower():
        if char in cipher1.lower():  
            index = cipher1.index(char) 
            result += cipher2[index] 
        else: 
            result += char
    return result

cipher1 = input("Enter the first cipher string: ")
cipher2 = input("Enter the second cipher string: ")
message = input("Enter the message to decipher: ")

print(decipher(cipher1, cipher2, message))