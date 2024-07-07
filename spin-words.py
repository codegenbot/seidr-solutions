import re


def spin_words(string):
    words = re.sub(r"\b(\w{5,})", r"\1", string)
    return " ".join(words)


# Test the function with a few examples
print(spin_words("hello world"))  # should print "dlrow olleh"
print(spin_words("spin-words problem"))  # should print "problem spin-words"