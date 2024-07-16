def decipher():
    key1 = input("Enter the first string: ")
    key2 = input("Enter the second string: ")
    message = input("Enter the message to be deciphered: ")
    mapping = {char1: char2 for char1, char2 in zip(key1, key2)}
    
    result = ""
    for char in message:
        if char.isalpha():
            orig_case = char.isupper()
            result_char = mapping.get(char.lower(), char).lower() if orig_case else mapping.get(char, char).upper()
            result += result_char
        else:
            result += char
            
    print("Deciphered message: ", result)''