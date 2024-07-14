def substitution_cipher(cipher1, cipher2, message):
    cipher1 = cipher1.lower()
    cipher2 = cipher2.lower()
    message = message.lower()

    result = ""
    for char in message:
        if char in cipher2: 
            index = cipher2.index(char) 
            result += cipher1[index] if char.isupper() else cipher1[index].lower()
        else: 
            result += char
    return result

if __name__ == "__main__":
    cipher1 = input("Enter the first cipher: ")
    cipher2 = input("Enter the second cipher: ")
    message = input("Enter the message to decipher: ")
    print(substitution_cipher(cipher1, cipher2, message))