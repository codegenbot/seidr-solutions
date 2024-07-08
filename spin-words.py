import re


def spin_words(string):
    words = re.sub(r"\b(\w{5,})\b", r"\1", string)
    return words