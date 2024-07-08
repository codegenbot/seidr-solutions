import re


def spin_words():
    print("Enter a string: ")
    string = input()
    words = re.sub(r"\b(\w{5,})", r"\1", string)
    return words