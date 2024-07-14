def validate_tweet():
    tweet = input("Please type your tweet: ", encoding='utf-8')
    if len(tweet.encode('utf-8', 'ignore').decode()) > 140:
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(tweet)} characters")