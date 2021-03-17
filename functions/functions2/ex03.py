"""Write a function to multiplu all numbers of a list"""

def multiply(number_list):
    result = 1
    for i in number_list:
        result *= i
    return result
#----------------------------------

"""------------------------------------
Put the numbers you want to multiply here
--------------------------------------"""
numbers = [3,4,5,6]

print(multiply(numbers))
