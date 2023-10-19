
"""
Given a string of words, reverse all the words. For example:

Given:

'This is the best'

output:

'best the is This'
As part of this exercise you should remove all leading and trailing whitespace. So that inputs such as:

'  space here'  and 'space here      '
output:
'here space'
Also, all the words should be stored in the same variable (as a list). In the example above, the input sentence was converted into a list of strings (as defined in the code below).



"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ''
    for i in c:
        d+=b[a.find(i)]
    print(d)
