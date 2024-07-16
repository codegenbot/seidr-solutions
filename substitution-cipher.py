def substitution_cipher():
    cipher_text = input().strip()
    mapping = list(input().strip())
    message = input().strip()

    deciphered_message = ''.join([mapping[ord(c) - ord('a')] if c.isalpha() and c.islower() else mapping[ord(c) - ord('A')] if c.isalpha() and c.isupper() else c for c in message])

    return deciphered_message

print(substitution_cipher())