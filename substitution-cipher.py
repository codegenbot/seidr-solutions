def substitution_cipher(cipher, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            deciphered_char = chr(
                (ord(char) - ascii_offset + cipher[ord(char) - ascii_offset]) % 26
                + ascii_offset
            )
            deciphered_message += deciphered_char
        else:
            deciphered_message += char
    return deciphered_message


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, message))