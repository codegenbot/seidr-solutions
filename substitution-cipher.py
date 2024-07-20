```Python
def decipher_message(message):
    cipher1 = "abcdefghijklmnopqrstuvwxyz"
    cipher2 = "thequickbrownfxjumpoverlazydog"
    
    cipher_map = {}
    for i in range(len(cipher1)):
        cipher_map[cipher1[i]] = cipher2[i]
    
    deciphered_message = ""
    for char in message:
        if char in cipher_map:
            deciphered_message += cipher_map[char]
        else:
            deciphered_message += char
    
    return deciphered_message

cipher1 = "abcdefghijklmnopqrstuvwxyz"
cipher2 = "thequickbrownfxjumpoverlazydog"
message = "gurpenmlxrfvqrbarpbzrguvaqvnyqra"
print(decipher_message(message))