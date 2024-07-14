import re


def spin_words(sentence):
    words = sentence.split()
    spun = [" ".join(reversed(word.replace(" ", ""))) if len(word) >= 5 else word for word in words]
    return " ".join(spun)