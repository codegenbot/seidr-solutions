def substitution_cipher(input1, input2, input3):
    cipher = str.maketrans(input1, input2)
    result = input3.translate(cipher).lower()  
    return result