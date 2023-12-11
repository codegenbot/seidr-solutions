def spin_words(sentence):
    words = sentence.split()
    result = [(word, word[::-1]) for word in words]
    return " ".join([rev_word for (word, rev_word) in result if len(word) >= 5])