def substitution_cipher(cipher_text1, cipher_text2, message):
    result = ""
    for char in message:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            result += cipher_text2[index]
        else:
            result += char
    return result


# Test cases
print(substitution_cipher("hello", "olleh", "hello"))  # Output: olleh
print(substitution_cipher("jgh", "hjg", "jhj"))
print(substitution_cipher("az", "za", "aaz"))  # Output: zz
print(substitution_cipher("el", "le", "eeeee"))