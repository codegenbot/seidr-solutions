def validate_tweet(tweet):
    if sum(map(ord, tweet.replace(" ", ""))) // 2 > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(map(ord, tweet)) // 2} characters"

tweet = input("Enter your tweet: ")
print(validate_tweet(tweet))