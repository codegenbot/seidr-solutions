def decipher(cipher_text, cipher_key):
    # Create a dictionary to store the mapping of characters in the cipher key
    char_map = {}
    for i, char in enumerate(cipher_key):
        char_map[char] = cipher_text[i]
    
    # Decipher the text using the character mapping
    deciphered_text = ""
    for char in cipher_text:
        if char in char_map:
            deciphered_text += char_map[char]
        else:
            deciphered_text += char
    
    return deciphered_text

def main():
    # Get the input strings from the user
    cipher_text = input("Enter the cipher text: ")
    cipher_key = input("Enter the cipher key: ")
    plain_text = input("Enter the plain text: ")
    
    # Decipher the cipher text using the cipher key
    deciphered_text = decipher(cipher_text, cipher_key)
    
    # Print the deciphered text
    print("The deciphered text is:", deciphered_text)

if __name__ == "__main__":
    main()