def spin_words(sentence):
    return " ".join(
        [word if len(word) < 5 else word[::-1] for word in sentence.split()]
    )


input_str = input()
output_str = spin_words(input_str)
print(output_str)