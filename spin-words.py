import re


def spin_words():
    string = input("Enter a string: ")
    words = re.sub(r"\b(\w{5,})", r"\1", string)
    print("The spin-words result is:", words)