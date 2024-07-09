def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"

print(validate_tweet(" "))
print(validate_tweet("1"))
print(validate_tweet("max...")) 
print(validate_tweet("!@#$%")) 
print(validate_tweet("Tooooooooooolong"))