import unicodedata

def validate_tweet():
    tweet = input("Please type your tweet: ")
    if len(unicodedata.normalize('NFKD', tweet).encode('ascii', 'ignore').decode()) > 140:
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(tweet)} characters")