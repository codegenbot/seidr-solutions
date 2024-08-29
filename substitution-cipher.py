Here is the solution:

def substitute_cipher(cipher_string1, cipher_string2, message):
    result = ""
    for char in message:
        if char in cipher_string1:
            index = cipher_string1.index(char)
            result += cipher_string2[index]
        else:
            result += char
    return result