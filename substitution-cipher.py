def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += char
    return result


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, cipher2, message))