def validate_tweet():
    tweet = input("Enter your tweet: ")
    if sum(1 for char in tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(1 for char in tweet)} characters"