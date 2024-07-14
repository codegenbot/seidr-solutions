def spin_words(sentence):
    return " ".join(
        [" " + word[::-1] if word != word[::-1] else word for word in sentence.split()]
    )