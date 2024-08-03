```
def substitution_cipher(cipher, message):
    deciphered_message = ''
    for char in message:
        if char in cipher[0]:
            index = cipher[0].index(char)
            deciphered_message += cipher[1][index]
        else:
            deciphered_message += char
    return deciphered_message

# read input from user
cipher_text1 = input()
cipher_text2 = input()
text_to_decrypt = input()

print(substitution_cipher([cipher_text1, cipher_text2], text_to_decrypt))