cipher = input()
mapping = input()
message = input()

deciphered_message = "".join(mapping[cipher.index(char)] if char in cipher else char for char in message if char in cipher)

print(deciphered_message)