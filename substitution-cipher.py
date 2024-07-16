```python
def substitution_cipher():
    cipher_text = input().strip()
    mapping = list(input().strip()).lower()
    message = input().strip()

    deciphered_message = ''.join([mapping[ord(c.lower()) - ord('a')] if c.isalpha() else c for c in message])

    return deciphered_message

print(substitution_cipher())