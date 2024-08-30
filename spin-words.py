def spin_words(input_string):
    words = input_string.split()
    output_string = " ".join(word if len(word) < 5 else word[::-1] for word in words)
    return output_string