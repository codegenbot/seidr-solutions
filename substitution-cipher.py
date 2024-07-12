def substitution_cipher(input1, input2, input3):
    cipher = {
        char: char
        for char in set(input1 + input2)
        if input1.count(char) == 1 or input2.count(char) == 1
    }
    return "".join(cipher[char] for char in input3)