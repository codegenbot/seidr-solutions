```
def spin_words(input_str):
    return ' '.join(word[::-1] if len(word) >= 5 else word for word in input_str.split())