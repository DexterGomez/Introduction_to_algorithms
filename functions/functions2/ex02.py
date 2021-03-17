"""Write a function to sum all numbers of a list"""

def sum_list(number_list):
    result = 0
    for i in number_list:
        result += i
    return result
#----------------------------

"""------------------------------------
Put the numbers you want to sum here
----------------------------------------"""
numbers = [4,5,6,7,8]

print(sum_list(numbers))
