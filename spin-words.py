def spin_words(string):
    return ' '.join([word[::-1] if len(word) >= 5 and word.isalpha() else word for word in string.split(' ')])