import re


def spin_words(string):
    words = string.split()
    reversed_words = [word[::-1] if len(word) >= 5 else word for word in words]
    return " ".join(reversed_words)