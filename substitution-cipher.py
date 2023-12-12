def decipher_message(cipher, message):
    # Create a dictionary to store the mapping of characters in the cipher
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = message[i]
    
    # Decipher the message by replacing each character with its corresponding value in the dictionary
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char
    
    return deciphered_message

# Test cases
print(decipher_message("abc", "bcd")) # Should print "cde"
print(decipher_message("a", "a")) # Should print "a"
print(decipher_message("j", "h")) # Should print "h"
print(decipher_message("a", "z")) # Should print "z"
print(decipher_message("e", "l")) # Should print "llllllllll"