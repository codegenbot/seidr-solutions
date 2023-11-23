cipher = input()
mapping = input()
message = input()

deciphered_message = "".join(cipher[mapping.index(char)] if char in mapping else char for char in message)

print(deciphered_message)