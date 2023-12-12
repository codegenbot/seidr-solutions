```
def substitution_cipher(ciphertext, key):
    # Create a dictionary to store the mapping of characters in ciphertext to their corresponding decrypted characters
    char_map = {}
    for i, char in enumerate(key):
        char_map[char] = ciphertext[i]
    
    # Decrypt the message by replacing each character with its corresponding decrypted character from the dictionary
    decrypted_message = ""
    for char in ciphertext:
        if char in char_map:
            decrypted_message += char_map[char]
        else:
            decrypted_message += char
    
    # Handle the case where a character does not have a corresponding decrypted character
    if len(decrypted_message) < len(ciphertext):
        decrypted_message += ciphertext[-1]
    
    return decrypted_message
```