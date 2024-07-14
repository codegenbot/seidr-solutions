```
def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            if c1.islower():  
                char_map[c1] = c2
            else:  
                char_map[c1] = c2.upper()
    result = ""
    for char in message:
        if char.isalpha():  
            if char.isupper() and char.lower() in char_map:  
                result += char_map[char.lower()].upper()
            elif char.lower() in char_map:  
                result += char_map[char.lower()]
        else:
            result += char
    return result

if __name__ == "__main__":
    cipher1 = input("Enter cipher 1: ")
    cipher2 = input("Enter cipher 2: ")
    message = input("Enter message: ")
    print(decrypt_message(cipher1, cipher2, message))