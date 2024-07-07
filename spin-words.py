import re


def spin_words():
    # Prompt the user for input
    string = input("Enter a string: ")

    if len(string) > 0:
        # Reverse all words that are five or more letters long
        words = re.sub(r"\b(\w{5,})", r"\1", string)

        # Print the resulting string
        print("The spin-words result is:", words)
    else:
        print("You must enter a non-empty string.")