def spin_words(sentence):
    words = sentence.split()
    spun = [" ".join(word[::-1]) if len("".join(word)) >= 5 else word for word in words]
    return " ".join(spun)