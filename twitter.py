def validate_tweet():
    tweet = input("Enter your tweet: ")
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet.strip() == "":
        return "You didn't type anything"
    else:
        return f"{len(tweet)}"

print(f"Your tweet has {validate_tweet()} characters")