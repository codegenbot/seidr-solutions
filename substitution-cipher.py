```
def substitution_cipher(input1, input2, input3):
    cipher = str(input1) + str(input2)
    deciphered_message = ""

    for char in input3:
        if char in input1:
            deciphered_message += input2[0]
        elif char in input2:
            index = 0
            for c in input1:
                if c == char:
                    deciphered_message += input2[index]
                    break
                index += 1
        else:
            deciphered_message += char

    return deciphered_message