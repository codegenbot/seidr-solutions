```
import re

tweet = input("Enter a tweet: ")
if len(tweet) > 140:
    print("Too many characters")
elif len(tweet) == 0:
    print("You didn't type anything")
else:
    print(f"Your tweet has {len(tweet)} characters")