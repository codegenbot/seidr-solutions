Here is the Python solution for the problem:

```
def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = ""
    for char in text:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            deciphered_text += cipher_text2[index]
        else:
            deciphered_text += char
    return deciphered_text

# Test cases
print(substitution_cipher("a", "b", "aaa"))  # Output: bbb
print(substitution_cipher("j", "h", "jhj"))   # Output: hhh
print(substitution_cipher("a", "z", "azaa"))  # Output: zzzz
print(substitution_cipher("e", "l", "elleeeee"))  # Output: llllllll