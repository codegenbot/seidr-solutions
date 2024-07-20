def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        print("Warning: cipher strings are not the same length")
    cipher_map = {k:v for k,v in zip(cipher1.lower(), cipher2.lower())}
    
    deciphered_message = ""
    for char in message:
        if char.isalpha():  # Check if character is alphabetic
            deciphered_message += cipher_map.get(char.lower(), char)  # Apply the cipher or return original character
        else:
            deciphered_message += char  # Keep non-alphabetic characters as they are
    
    return deciphered_message