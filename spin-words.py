```
def spin_words(text):
    words = text.split()
    result = [word[::-1] if len(word) > 4 else word for word in words]
    return ' '.join(result).strip()

text = input("Enter a string: ")
print(spin_words(text))