def substitution_cipher(input1, input2, input3):
    result = ""
    for char in input3:
        if char in input1:
            index = input1.index(char)
            result += input2[index]
        else:
            result += char
    return result