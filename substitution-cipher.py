cipher = input()
mapping = input()
message = input()

deciphered_message = "".join(
    message[mapping.find(char)] if (mapping.find(char) != -1 and mapping.find(char) < len(message))
    else char for char in cipher
)

print(deciphered_message)