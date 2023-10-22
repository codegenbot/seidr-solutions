"""
Given a string of one or more words (separated by spaces),
reverse all of the words that are ﬁve or more letters long
and return the resulting string.
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
if __name__ == '__main__':
    s = input()
    s = s.split(' ')
    res = []
    for i in s:
        if len(i) >= 5:
            res.append(i[::-1])
        else:
            res.append(i)
    print(' '.join(res))
