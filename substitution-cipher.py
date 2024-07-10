Here is the solution:

def substitution_cipher(cipher1, cipher2, message):
    cipher = str(cipher2)[0:-1]
    deciphered_message = ""
    for char in message:
        if char in cipher:
            index = (cipher.index(char) + 1) % len(cipher)
            deciphered_message += cipher[index]
        else:
            deciphered_message += char
    return deciphered_message