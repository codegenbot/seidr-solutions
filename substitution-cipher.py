```
def substitution_cipher(input1, input2, input3):
    cipher = input1 + input2
    deciphered_message = ""

    for char in input3:
        if char.isalpha():
            if char.isupper():
                deciphered_message += cipher[(cipher.upper().index(char.upper()))].upper()
            else:
                deciphered_message += cipher[(cipher.lower().index(char))].lower()
        else:
            deciphered_message += char

    return deciphered_message