```Python
def validate_tweet():
    tweet = input("Please type your tweet: ")
    if len(tweet.replace("\n", "").encode('utf-8').decode('utf-8')) > 140:
        print(f"Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(tweet.replace("\n", ""))} characters")

validate_tweet()