cipher = input()
decipher = input()
message = input()

decoded_message = "".join(
    decipher[cipher.index(char)] if char in cipher else char for char in message
)
print(decoded_message)