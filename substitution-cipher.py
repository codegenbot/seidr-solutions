Here is the Python solution:

def substitution_cipher(cipher1, cipher2, message):
    return ''.join([cipher2[i] if i < len(cipher2) else '' for i in range(len(message))])

# Read input from user
cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, cipher2, message))