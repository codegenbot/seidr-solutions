```
"Your tweet has {} characters".format(len(re.sub(r'\W+', '', tweet))) if (140 > len(tweet) >= 1) else "Too many characters" if (len(tweet) > 140) else "You didn't type anything"