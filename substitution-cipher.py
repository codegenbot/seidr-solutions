```
def substitution_cipher(cipher_string1, cipher_string2, message):
    cipher_dict = {}
    for i in range(len(cipher_string1)):
        if cipher_string1[i] != cipher_string2[i]:
            continue
        cipher_dict[cipher_string1[i]] = cipher_string2[i]
    
    deciphered_message = ""
    for char in message:
        if char in cipher_dict:
            deciphered_message += cipher_dict[char]
        else:
            deciphered_message += char
    
    return deciphered_message