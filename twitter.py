```
def validate_tweet():
    tweet = input("Please type your tweet: ")
    if len(tweet.replace("\n", "").encode('utf-8').decode('utf-8')) > 140:
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print("Your tweet has {} characters".format(len(tweet.replace("\n", ""))))

validate_tweet()