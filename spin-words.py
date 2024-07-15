def spin_words(text):
    words = text.split()
    result = [' '.join([word[::-1] if len(word) > 4 else word for word in words])].strip()
    return result

text = input("Enter a string: ")
print(spin_words(text))