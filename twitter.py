```
def validate_tweet():
    tweet = input("Please type your tweet: ")
    if not all(char.isalnum() or char in ' @#-+=.:!"\'$%*?_(){}[]<>,.' for char in tweet):
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(tweet)} characters")