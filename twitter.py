tweet = input("Enter a tweet: ")
print("You didn't type anything" if not tweet else "Too many characters" if len(tweet) > 140 else f"Your tweet has {len(tweet)} characters")