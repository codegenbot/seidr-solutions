```
def decipher():
    key1 = input("Enter the first string: ")
    key2 = input("Enter the second string: ")
    message = input("Enter the message to be deciphered: ")

    mapping = {key1[i]: key2[i] for i in range(len(key1))}
    result = "".join([mapping.get(char, char) for char in message])

    print("Deciphered message: " + result)

if __name__ == "__main__":
    decipher()