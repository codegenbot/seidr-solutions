```
def validate_tweet():
    tweet = input("Please type your tweet: ")
    if sum(1 for c in tweet) > 140:
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(tweet)} characters")