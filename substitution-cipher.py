def cipher(cipher_text):
    key = "abcdefghijklmnopqrstuvwxyz"
    cipher_text = cipher_text.lower()
    deciphered_text = ""
    for char in cipher_text:
        if char in key:
            deciphered_text += key[key.index(char) - 1]
        else:
            deciphered_text += char
    return deciphered_text

def substitution_cipher(cipher):
    cipher = cipher.split()
    cipher_text = cipher[0].lower()
    key = cipher[1]
    deciphered_text = ""
    for i in range(len(cipher_text)):
        if cipher_text[i] in key:
            deciphered_text += key[key.index(cipher_text[i]) - 1]
        else:
            deciphered_text += cipher_text[i]
    return deciphered_text

def main():
    print("Enter the cipher text: ")
    cipher_text = input()
    print("Enter the key: ")
    key = input()
    print(substitution_cipher(cipher_text, key))

if __name__ == "__main__":
    main()