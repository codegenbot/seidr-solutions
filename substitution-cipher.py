
# Read input from the user
message = input("Enter message to decipher: ")
substitution_cipher = input("Enter substitution cipher: ")

def decipher(message, substitution_cipher):
    return message.translate(substitution_cipher)

deciphered_message = decipher(message, substitution_cipher)
print(f"Deciphered message: {deciphered_message}")