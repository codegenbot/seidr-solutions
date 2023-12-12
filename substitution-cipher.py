def substitute_cipher(cipher, message):
    # Create a dictionary to store the substitutions
    subs = {}
    for i in range(len(cipher)):
        subs[cipher[i]] = message[i]
    
    # Apply the cipher to the message
    deciphered_message = ""
    for char in message:
        if char in subs:
            deciphered_message += subs[char]
        else:
            deciphered_message += char
    
    return deciphered_message
```