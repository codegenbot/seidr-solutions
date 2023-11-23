cipher = input()
mapping = input()
message = input()

deciphered_message = "".join(mapping[cipher.index(char)] if char in mapping else char for char in message)
print(deciphered_message)