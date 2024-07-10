def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]
    result = ''
    for char in message:
        if char.isalpha():  
            original_char = char
            original_char_is_upper = original_char.isupper()
            result_char = cipher.get(original_char, original_char)
            if original_char_is_upper and not result_char.isupper() or (not original_char_is_upper and not result_char.islower()):
                return "Error: Cipher character is not the same case as the original."
            result += result_char
        else:  
            result += char
    return result