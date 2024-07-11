```Python
def spin_words(text):
    """Spin words: Given a string of one or more words (separated by spaces), 
    reverse all of the words that are 5 or more letters long and return the resulting string."""
    return " ".join(word[::-1] if len(word) >= 5 else word for word in text.split())