def solve(cipher1, cipher2, message):
    deciphered_message = ""
    for i in range(len(message)):
        index = cipher1.index(message[i])
        deciphered_message += cipher2[index]
    return deciphered_message
```