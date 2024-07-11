```
def decipher(cipher1, cipher2, message):
    result = ""
    for char in message.lower():
        if char.isalpha():  
            diff = ord(cipher2[0]) - ord(cipher1[0]) 
            result += chr((ord(char) - ord(cipher1[0])) % 26 + diff)  
        else:  
            result += char
    return result