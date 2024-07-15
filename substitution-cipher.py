```
def substitution_cipher():
    cipher_string1 = input("Enter the first cipher string: ")
    cipher_string2 = input("Enter the second cipher string: ")
    message = input("Enter the message to decipher: ")

    if len(cipher_string1) != len(cipher_string2):
        return "Error: Cipher strings must be of the same length."

    cipher_map = {char: cipher_string2[i] for i, char in enumerate(cipher_string1)}
    deciphered_message = ""
    for char in message:
        if char in cipher_map:
            deciphered_message += cipher_map[char]
        else:
            deciphered_message += char
    return deciphered_message