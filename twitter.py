```
import re
tweet = input("Enter a tweet: ")
if not re.sub(r'[\u0009-\u001A\u001C-\u001D\u0020-\u002F\u003A\u003C\u003E\u0040]','', tweet).strip():
    print("You didn't type anything")
elif len(tweet) > 140:
    print("Too many characters")
else:
    print(f"Your tweet has {len(tweet)} characters")