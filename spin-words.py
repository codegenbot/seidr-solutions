def spin_words(sentence):
    return " ".join(
        [word[::-1] if len(word.lstrip()) >= 5 else word for word in sentence.split()]
    )