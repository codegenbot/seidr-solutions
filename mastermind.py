
"""
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0
"""

# # For some reason Python does not allow to return a full list of dicts at once
# # because dict is not a very good container for outputing
# # If you create a list of dicts you will most probably obtain a long long list of keys instead of the dict
# So be careful when passing a dictionary!
# In the Spirit of the leetcode mission
# May the Code review guide me


class MasterMind:
    def __init__(self):
        print("mastermind has been started")
        self.wordDict = {}

    def blackPeg(self, master_code, user_in):
        peg_count = 0
        for i in range(4):
            master_hash = master_code[i]
            user_hash = user_in[i]
            if (master_hash == user_hash):
                peg_count += 1
                master_code = master_code.replace(master_code[i], None)
                user_in = user_in.replace(user_in[i], None)

        return peg_count

    def whitePeg(self, master_code, user_in):
        print(master_code, user_in)
        return

    def replyClue(self, master_code, user_in):
        return self.blackPeg(master_code, user_in), 0

if __name__ == '__main__':
    masterMind = MasterMind()

    # 0 0
    # RRRR it is all matched
    # RRRR

    # 0 4
    # it is all matched
    master_code = "BBBB"
    user_in = "BBBB"
    blackpegs, whitepegs = masterMind.replyClue(master_code, user_in)
    print("\n MasterCode: %s \t UserCode: %s \n black pegs: %s \t white pegs: %s " % (
    str(master_code), str(user_in), str(blackpegs), str(whitepegs)))


    # 3 1, it is two matched by letters, and one is matched by letters and numbers
    # BOBG  (bog by letters and numbers, and bg by letters
    # BBB G (bbb - no match, and g - by letters)

    # BBBG None. 4 should be matched
    master_code = "BBBB"
    user_in = "BBBG"
    blackpegs, whitepegs = masterMind.replyClue(master_code, user_in)
    print("\n MasterCode: %s \t UserCode: %s \n black pegs: %s \t white pegs: %s " % (
    str(master_code), str(user_in), str(blackpegs), str(whitepegs)))


    # BBBG None. 4 should be matched
    master_code = "BBBB"
    user_in = "BGBB"
    blackpegs, whitepegs = masterMind.replyClue(master_code, user_in)
    print("\n MasterCode: %s \t UserCode: %s \n black pegs: %s \t white pegs: %s " % (
    str(master_code), str(user_in), str(blackpegs), str(whitepegs)))




