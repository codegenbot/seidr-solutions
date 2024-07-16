def spin_words(input_string):
    result = ' '.join([word[::-1] if len(word) >= 5 else word for word in input_string.split()])
    return result.strip()