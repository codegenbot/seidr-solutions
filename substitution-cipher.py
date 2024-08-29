def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - ord("A")
            deciphered_char = chr(
                ord(cipher2[index].upper()) + (ord(char.upper()) - ord("A")) % 26
            )
            deciphered_message += (
                deciphered_char.lower() if char.islower() else deciphered_char
            )
        else:
            deciphered_message += char
    return deciphered_message