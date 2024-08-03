def spin_words(input_str):
    words = input_str.split()
    output_str = " ".join(word if len(word) < 5 else word[::-1] for word in words)
    return output_str