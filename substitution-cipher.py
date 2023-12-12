def substitute(ciphertext, cipher, message):
    # Create a dictionary to store the mapping of characters in the cipher
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = ciphertext[i]
    
    # Substitute each character in the message with its corresponding character in the cipher
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char
    
    return deciphered_message

def main():
    # Read input from stdin
    ciphertext, cipher, message = sys.stdin.read().split()
    
    # Call the substitute function to decipher the message
    deciphered_message = substitute(ciphertext, cipher, message)
    
    # Print the deciphered message to stdout
    print(deciphered_message)

if __name__ == "__main__":
    main()