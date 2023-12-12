def cipher(string1, string2, string3):
    # Create a dictionary to store the mapping between characters
    mapping = {}
    for i in range(len(string1)):
        mapping[string1[i]] = string2[i]
    
    # Decipher the third string using the mapping
    deciphered_message = ""
    for char in string3:
        if char in mapping:
            deciphered_message += mapping[char]
        else:
            deciphered_message += char
    
    return deciphered_message