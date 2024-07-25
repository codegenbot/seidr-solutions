tweet = input("Enter a tweet: ")
if not tweet.strip().lstrip():
    print("You didn't type anything")
elif len(tweet) > 140:
    print("Too many characters")
else:
    print(f"Your tweet has {len(tweet)} characters")