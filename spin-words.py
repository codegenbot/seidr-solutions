def spin_words(string):
    return " ".join([word[::-1] if len(word) > 4 and word.strip() != '' else word for word in string.split()])