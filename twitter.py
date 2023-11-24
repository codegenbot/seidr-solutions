tweet = input()

if len(tweet) > 140:
    print("Too many characters")
elif len(tweet) == 0:
    print("You didn't type anything")
else:
    print("Your tweet has", len(tweet), "characters")