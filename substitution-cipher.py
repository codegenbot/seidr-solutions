```
def substitution_cipher(input1, input2, input3):
    cipher = str(input1) + str(input2)
    deciphered_message = ""

    for char in input3:
        if char in input1:
            deciphered_message += input2[input1.index(char)]
        elif char in input2:
            deciphered_message += input1[input2.index(char)]
        else:
            deciphered_message += char

    return deciphered_message