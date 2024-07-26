def spin_words(input_string):
    words = input_string.split()
    output_string = " ".join([word[::-1] if len(word) >= 5 else word for word in words])
    return output_string