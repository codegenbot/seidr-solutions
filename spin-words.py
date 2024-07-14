def spin_words(sentence):
    return " ".join([word[::-1] if len(word) >= 5 and word != word.lower() else word for word in sentence.split()])