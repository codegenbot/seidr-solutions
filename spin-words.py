import re


def spin_words():
    # Read input from user
    string = input("Enter a string: ")

    # Split the string into individual words
    words = string.split()

    # Reverse all words that are 5 or more letters long
    for i, word in enumerate(words):
        if len(word) >= 5:
            words[i] = word[::-1]

    # Join the words back into a string and return it
    return " ".join(words)