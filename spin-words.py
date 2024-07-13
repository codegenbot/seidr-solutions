def spin_words(input_str):
    words = input_str.split()
    result = " ".join([word[::-1] if len(word) >= 5 else word for word in words])
    return result