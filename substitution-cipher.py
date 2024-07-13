def substitution_cipher(input1, input2, input3):
    cipher = str.maketrans(input1, input2)
    output = input3.translate(cipher)
    return output