import re


def spin_words(string):
    words = re.sub(r"\b(\w{5,})", r"\1", string)
    return words


# Prompt user for input and pass it to the spin_words function
user_input = input("Enter a string: ")
print("The spin-words result is:", spin_words(user_input))