```
def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        print("Warning: cipher strings are not the same length")
    cipher_map = {(char1 if char1.isalpha() else '-').lower():(char2 if char2.isalpha() else '-').lower() for char1, char2 in zip(cipher1, cipher2)}
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            deciphered_char = cipher_map.get(char.lower(), char)
            if char.isupper():
                deciphered_message += deciphered_char.upper()
            else:
                deciphered_message += deciphered_char
        else:
            deciphered_message += char
    return deciphered_message

cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string: ")
message = input("Enter the message to be deciphered: ")

print(substitution_cipher(cipher1, cipher2, message))