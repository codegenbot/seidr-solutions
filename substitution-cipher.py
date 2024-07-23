cipher = input()
plain = input()
message = input()

deciphered_message = "".join([plain[cipher.index(char)] for char in message])
print(deciphered_message)