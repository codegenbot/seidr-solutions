import re

input_str = input("Enter a tweet: ")

if len(input_str) > 140:
    print("Too many characters")
elif input_str == "":
    print("You didn't type anything")
else:
    print(f"Your tweet has {len(input_str)} characters")