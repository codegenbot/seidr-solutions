def spin_words(sentence):
    words = sentence.split()
    return ' '.join(reversed([word[::-1] if len(word) >= 5 else word for word in words]))