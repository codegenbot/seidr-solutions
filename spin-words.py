"""
Title: Reversing words that are longer than 5 letter.
Author: Pietro Zambelli
Github: https://github.com/DouglasErasmoMachado/code_challenges
"""

"""
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

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
def reverse_words(str):
    str_list = str.split(" ")
    res_list = []
    for item in str_list:
        if len(item) >= 5:
            res_list.append(item[::-1])
        else:
            res_list.append(item)
    return " ".join(res_list)

if __name__ == '__main__':
    str = "this is a test"
    print(reverse_words(str))
