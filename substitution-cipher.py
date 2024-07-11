def substitution_cipher(input1, input2, input3):
    cipher = str(input1) + str(input2)
    deciphered_message = ""

    for char in str(input3):
        if char in cipher:
            index = cipher.index(char)
            deciphered_message += cipher[index + 1] if index < len(cipher) - 1 else ""
        else:
            deciphered_message += char

    return deciphered_message