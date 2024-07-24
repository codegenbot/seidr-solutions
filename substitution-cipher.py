cipher = input()
decipher = input()
message = input()

deciphered_message = "".join(
    decipher[cipher.index(char)] if char in cipher else char for char in message
)
print(deciphered_message)