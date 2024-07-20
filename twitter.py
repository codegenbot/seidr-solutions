def validate_tweet(tweet):
    tweet = tweet.strip()
    if len(unquote(tweet).replace(' ', '')) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(unquote(tweet).replace(' ', ''))} characters"

tweet = input("Enter your tweet: ")
print(validate_tweet(tweet))