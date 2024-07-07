
# Read input from the user
message = input("Enter message to decipher: ")
substitution_cipher = input("Enter substitution cipher: ")

# Apply substitution cipher to the message
deciphered_message = substitution_cipher(message, substitution_cipher)
print(f"Deciphered message: {deciphered_message}")