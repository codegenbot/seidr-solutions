```
def spin_words(input_str):
    words = input_str.split()
    output_str = ''
    for word in words:
        if len(word) >= 5:
            output_str += word[::-1] + ' '
        else:
            output_str += word + ' '
    return output_str.strip()