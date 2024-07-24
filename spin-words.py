import re

def spin_words(s):
    words = re.split('(?<=[^A-Za-z])|(?=[^A-Za-z])', s)
    return ' '.join(word[::-1] if len(word.strip()) >= 5 else word for word in words)