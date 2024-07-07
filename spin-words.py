import re


def spin_words():
    string = input("Enter a string: ")
    words = re.sub(r"\b(\w{5,})", r"\1", string)
    return " ".join(words)


if __name__ == "__main__":
    spin_words()