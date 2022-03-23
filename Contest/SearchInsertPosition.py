'''
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:
• nums contains distinct values sorted in ascending order.

'''

array = list(input().split(','))
target = input()

if (target in array):
    print(array.index(target))
else:
    while (True):
        if (target in array):
            print(array.index(target) + 1)
            break
        else:
            target = int(target) - 1
            target = str(target)
