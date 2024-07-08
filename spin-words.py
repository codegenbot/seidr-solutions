
import re

def spin_words(string):
    words = string.split()
    reversed_words = [word[::-1] if len(word) >= 5 else word for word in words]
    return " ".join(reversed_words)

# get input from user
input_str = input("Enter a string of one or more words: ")

# call the function to spin the words
result = spin_words(input_str)

print(f"Spinning Words: {result}")