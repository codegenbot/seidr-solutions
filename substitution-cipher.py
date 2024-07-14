def substitution_cipher(input1, input2, input3):
    cipher = str(input1) + str(input2)
    deciphered_message = ""

    for char in input3:
        if char in cipher[: len(input1)]:
            deciphered_message += input1[cipher.index(char)]
        elif char in cipher[len(input1) :]:
            deciphered_message += input2[cipher.index(char) - len(input1)]
        else:
            deciphered_message += char

    return deciphered_message