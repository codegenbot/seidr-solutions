def substitution_cipher():
    char1, char2 = zip(*[list(input().strip()), list(input().strip())])
    cipher_map = ''.join(''.join(map(str, x)) for x in [char1, char2])
    message = input().strip()
    
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.lower()) - 97
            result += (
                cipher_map[index].lower()
                if char.islower()
                else cipher_map[index].upper()
            )
        else:
            result += char
    print(result)