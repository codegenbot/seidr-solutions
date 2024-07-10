cipher1 = input()
cipher2 = input()
message = input()

deciphered_message = "".join(
    cipher2[cipher1.index(char)] if char in cipher1 else char for char in message
)
print(deciphered_message)