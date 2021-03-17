"""Write a program to print the even numbers from a given list"""

def even_numbers(list_of_numbers):
    new_list = []
    for i in list_of_numbers:
        if (i%2) == 0:
            new_list.append(i)
    return new_list
#-------------------------------------------------------

""".................................................
Insert the list of numbers here
..............................................."""
numbers = [1,2,3,4,5,6,7,8,9,10]

print(even_numbers(numbers))
