def validate_tweet():
    tweet = input("Please type your tweet: ")
    if len(tweet.encode('utf-8').decode().replace(" ", "")) > 140:
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        try:
            print(f"Your tweet has {len(tweet.encode('utf-8').decode().replace(' ', ''))} characters")
        except UnicodeDecodeError:
            print("Too many characters")