# Read input from the user
message = input("Enter message to decipher: ")
substitution_cipher = input("Enter substitution cipher: ")


# Define a function that applies the cipher to the message
def apply_cipher(msg, cipher):
    deciphered_message = ""
    for i in range(len(msg)):
        # Look up the corresponding character in the substitution cipher and add it to the deciphered message
        deciphered_message += cipher[ord(msg[i])]
    return deciphered_message


# Apply the cipher to the message
deciphered_message = apply_cipher(message, substitution_cipher)
print("Deciphered message:", deciphered_message)