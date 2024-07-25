```
tweet = input("Enter a tweet: ")
if not tweet.strip().lstrip():
    print("You didn't type anything")
elif len(tweet.strip()) > 140:
    print("Too many characters")
else:
    print(f"Your tweet has {tweet.strip().__len__() if tweet else 0} characters")