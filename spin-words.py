import re


def spin_words(string):
    words = string.split()
    reversed_words = [word[::-1] if len(word) >= 5 else word for word in words]
    return " ".join(reversed_words)


# Prompt user for input and pass it to the spin_words function
user_input = input("Enter a string: ")
print("The spin-words result is:", spin_words(user_input))