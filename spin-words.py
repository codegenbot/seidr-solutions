def spin_words(sentence):
    words = sentence.split()
    spun = [word[::-1] if len(word) > 0 else word for word in words]
    return " ".join(spun)