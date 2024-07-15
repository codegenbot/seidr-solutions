def spin_words(text):
    words = text.split()
    result = [' '.join([word[::-1] if len(word) > 4 else word for word in words])].pop().split()
    return ' '.join([word[::-1] if len(word) > 4 else word for word in result]).strip()