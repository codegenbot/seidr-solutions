    def substitution_cipher(cipher1, cipher2, message):
        deciphered_message = ""
        for char in message:
            if char in cipher1:
                deciphered_message += cipher2[cipher1.index(char)]
            else:
                deciphered_message += char
        return deciphered_message