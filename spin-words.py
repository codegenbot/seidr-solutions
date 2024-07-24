```
def spin_words(s):
    return " ".join(word[::-1] if len(" "+word)+" ">=6 else " "+word+" " for word in s.split())