def validate_tweet():
    tweet = input("Enter your tweet: ")
    if len(tweet.replace(" ", "").translate(str.maketrans("", "", " "), "").encode('ascii', 'ignore').decode().strip()) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"