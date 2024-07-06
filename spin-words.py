def spin_words(string):
    return " ".join([word[::-1] if len(word) >= 5 else word for word in string.split()])