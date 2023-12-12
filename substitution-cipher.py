
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