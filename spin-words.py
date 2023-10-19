import datetime
import pprint
import sys

"""
Given a list of words, print out a sorted list of words that contain the same letters.
For example, given:
['cat', 'listen', 'code', 'act', 'silent', 'tac']
The result would be:
[['cat', 'act', 'tac'], ['listen', 'silent'], ['code']]
"""


def same_letters(input_list):
    input_dict = {}
    for item in input_list:
        key = ''.join(sorted(item))
        input_dict.setdefault(key, []).append(item)
    sorted_dict = sorted(input_dict.values(), key=lambda x: len(x), reverse=True)
    return sorted_dict


def reverse_5_more(input_str):
    input_list = eval(input_str)
    result = same_letters(input_list)
    pprint.pprint(result)


if __name__ == '__main__':
    input_str = sys.argv[1] if len(sys.argv) > 1 else '["cat", "listen", "code", "act", "silent", "tac"]'
    print(reverse_5_more(input_str))
