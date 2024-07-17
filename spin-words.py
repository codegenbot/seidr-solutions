```
def spin_words(text):
    words = text.split()
    original_words = ' '.join([word for word in words if len(word) < 5])
    reversed_words = ' '.join([word[::-1] if len(word) >= 5 else word for word in words])
    return original_words + ' ' + reversed_words