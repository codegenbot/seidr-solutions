def spin_words(input_string):
    return " ".join([word if len(word) < 5 else word[::-1] for word in input_string.split()]).strip()