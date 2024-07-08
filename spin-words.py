import re


def spin_words(string):
    if not string:
        return ""
    words = re.findall(r"\w+\b", string)
    return " ".join(reversed(words))


# Prompt user for input and pass it to the spin_words function
user_input = input("Enter a string: ")
print("The spin-words result is:", spin_words(user_input))