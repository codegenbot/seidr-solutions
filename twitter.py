def validate_tweet():
    tweet = input("Please type your tweet: ")
    encoded_tweet = tweet.encode('ascii', 'ignore')
    if len(encoded_tweet) > 140:
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(encoded_tweet)} bytes")