"""
Given a list of integers, return the largest product that can be made by multiplying any three integers.

For example, if the list is [-10, -10, 5, 2], we should return 500, since that's -10 * -10 * 5.

You can assume the list has at least three integers.
"""
import sys
def max_product_of_three(nums):
    if len(nums) <= 3:
        return nums[0] * nums[1] * nums[2]
    nums.sort()
    return max(nums[0] * nums[1] * nums[-1], nums[-1] * nums[-2] * nums[-3])

if __name__ == '__main__':
    nums = [int(x) for x in sys.argv[1:]]
    print(max_product_of_three(nums))
