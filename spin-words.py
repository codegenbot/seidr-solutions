"""
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:
this is a test
output:
this is a test
input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
"""
def reverse_word(word):
    if len(word) <= 5:
        return word
    return word[::-1]

def reverse_sentence(sentence):
    words = sentence.split(" ")
    words = [reverse_word(word) for word in words]
    return " ".join(words)

print(reverse_sentence("this is a test"))
print(reverse_sentence("a"))
print(reverse_sentence("this is another test"))
