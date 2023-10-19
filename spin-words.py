"""
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string. For example,
input: "this is a test"
output: "this is a test"
input: "this is another test"
output: "this is rehtona test"
input: "hi"
output: "hi"
"""

    def reverse_word(word):
        return word[::-1]

    def reverse_words_if_more_than_five(words):
        def reverse_word_if_more_than_five(word):
            if len(word) < 5:
                return word
            else:
                return reverse_word(word)

        return ' '.join(map(reverse_word_if_more_than_five, words.split()))
