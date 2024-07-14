```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha() and char.lower() in cipher2:  
            index = cipher2.index(char.lower()) 
            result += cipher1[index].upper() if char.isupper() else cipher1[index]
        else:
            result += char
    return result

cipher1 = "abcdefghijklmnopqrstuvwxyz"
cipher2 = "defghijklmnopqrstuvwxyzabc"
message = "Hello, World!"
print(substitution_cipher(cipher1, cipher2, message))