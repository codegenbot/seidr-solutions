```
def spin_words(sentence):
    """
    Reverses all words that are 5 or more letters long in the given sentence.
    
    Args:
        sentence (str): The input sentence.

    Returns:
        str: The modified sentence with words that are 5 or more letters long reversed.
    """

    words = sentence.split()
    result = []

    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)

    return "".join(result)