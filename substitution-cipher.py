def substitution_cipher(input1, input2, input3):
    cipher = str.maketrans(input1, input2)
    return str.translate(input3, cipher).replace(" ", "")