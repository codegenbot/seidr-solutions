Here is the Python code to solve this problem:

```
def substitute_cipher(s1, s2, message):
    cipher = {c1: c2 for c1, c2 in zip(s1, s2)}
    deciphered_message = ''
    for char in message:
        if char in cipher:
            deciphered_message += cipher[char]
        else:
            deciphered_message += char
    return deciphered_message