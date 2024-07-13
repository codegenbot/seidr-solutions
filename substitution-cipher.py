def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1 and char in cipher2:
            index = cipher2.index(char)
            result += cipher1[index]
        else:
            result += char
    return result


# test the function
cipher1 = input()
cipher2 = input()
message = input()
print(substitution_cipher(cipher1, cipher2, message))