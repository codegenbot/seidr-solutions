cipher = input()
message = input()
encrypted_message = input()

deciphered_message = ''.join([message[cipher.index(char)] if char in cipher else char for char in encrypted_message])

print(deciphered_message)