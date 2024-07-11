cipher = input()
plain = input()
message = input()

deciphered_message = "".join(
    plain[cipher.index(char)] if char in cipher else char for char in message
)
print(deciphered_message)