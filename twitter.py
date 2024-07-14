tweet = input("Please type your tweet: ")
if len(tweet.encode('utf-8').decode().replace("\n", "")) > 140:
    print(f"Too many characters")
elif tweet == "":
    print("You didn't type anything")
else:
    print(f"Your tweet has {len(tweet.replace('\n', ''))} characters")