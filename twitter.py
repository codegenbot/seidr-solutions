def validate_tweet():
    tweet = input("Enter your tweet: ").strip()
    if len(tweet) > 140:
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(tweet)} characters")