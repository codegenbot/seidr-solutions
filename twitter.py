```
tweet = input("Enter a tweet: ")
tweet = tweet.strip()  
if not tweet:
    print("You didn't type anything")
elif len(tweet) > 140:
    print("Too many characters")
else:
    print("Your tweet has {} characters".format(len(tweet)))