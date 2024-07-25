```
tweet = input("Enter a tweet: ")
print("Your tweet has " + str(len(tweet)) + " characters") if len(tweet) <= 140 else ("Too many characters" if len(tweet) > 0 else "You didn't type anything")