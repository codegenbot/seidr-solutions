```
def spin_words(text):
    words = text.split()
    result = [' '.join([word[::-1] if len(word) > 4 else word for word in words])]
    return ' '.join(result[0].split()[::-1]).strip()