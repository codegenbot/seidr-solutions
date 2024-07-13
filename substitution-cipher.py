Here is the solution:

def substitution_cipher(input1, input2, input3):
    cipher = str.maketrans(input1, input2)
    return str(input3).translate(cipher)