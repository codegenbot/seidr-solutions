```
def decipher():
    key1 = input("Enter the first string: ")
    key2 = input("Enter the second string: ")
    message = input("Enter the message to be deciphered: ")
    
    mapping = {char1.lower(): char2.lower() for char1, char2 in zip(key1, key2)}
    upper_mapping = {char1.lower(): char2.lower() for char1, char2 in zip([c.upper() for c in key1], [c.upper() for c in key2])}
    
    result = ""
    for char in message:
        if char.isalpha():
            orig_case = char.isupper()
            if char.lower() in mapping:
                result_char = mapping.get(char.lower(), char).lower() if orig_case else mapping.get(char.lower(), char).upper()
            elif char.lower() in upper_mapping:
                result_char = upper_mapping.get(char.lower(), char).lower() if orig_case else upper_mapping.get(char.lower(), char).upper()
            else:
                result_char = char
            result += result_char
        else:
            result += char
            
    print("Deciphered message: " + result)