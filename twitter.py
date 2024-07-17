```
def validate_tweet():
    tweet = input("Enter your tweet: ")
    if len(tweet.encode('ascii', 'ignore').decode()) > 140:
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(tweet.encode('ascii', 'ignore').decode())} characters")