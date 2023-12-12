```
def substitution_cipher(ciphertext, key):
    char_map = {}
    for i, char in enumerate(key):
        char_map[char] = ciphertext[i]
    
    decrypted_message = ""
    for char in ciphertext:
        if char in char_map:
            decrypted_message += char_map[char]
        else:
            decrypted_message += char
    
    if len(decrypted_message) < len(ciphertext):
        decrypted_message += ciphertext[-1]
    
    return decrypted_message
```