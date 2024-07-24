def spin_words(sentence):
    words = sentence.split()
    rev_words = ' '.join(word[::-1] if len(word) >= 5 else word for word in words)
    return rev_words