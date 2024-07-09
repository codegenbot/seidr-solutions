def spin_words(sentence):
    words = sentence.split()
    short_words = [word for word in words if len(word) < 5]
    long_words = [word[::-1] for word in words if len(word) >= 5]

    return "".join(short_words + long_words)