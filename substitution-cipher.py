```
def substitution_cipher():
    cipher = [i for i in input().lower()]
    message = [i for i in input().lower()]
    text = list(input().lower())
    
    deciphered_text = ''
    for char in text:
        if char in cipher:
            index = cipher.index(char)
            deciphered_text += message[index]
        else:
            deciphered_text += char
            
    return deciphered_text

print(substitution_cipher())