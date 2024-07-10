for char in message:
    if char.isalpha():  
        if char.isupper():
            result += cipher.get(char.upper(), char).upper()  
        else:
            result += cipher.get(char.lower(), char).lower()
    elif char in cipher:  # Check if the character exists in the cipher
        if char.isupper():
            result += cipher[char].upper()
        else:
            result += cipher[char].lower()
    else:  
        result += char