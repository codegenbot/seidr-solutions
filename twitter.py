def validate_tweet(tweet):
    tweet = tweet.replace(" ", "").encode('ascii', 'ignore').decode()
    if not tweet:
        return "You didn't type anything"
    elif len(tweet) > 140:  
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"

print(validate_tweet("")) 
print(validate_tweet("1"))   
print(validate_tweet("max length tweet..."))   
print(validate_tweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``"))
print(validate_tweet("Tooooooooooolong1"))