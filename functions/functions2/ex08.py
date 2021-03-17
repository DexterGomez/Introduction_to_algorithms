"""Write a function that takes a list and returns a new list with unique elements of the first list"""

def unique_elements(elements_list):
    new_list = []
    for i in elements_list:
        if i not in new_list:
            new_list.append(i)
    return new_list
#----------------------------------------------------

"""..................................
Insert the list of numbers here
....................................."""
numbers_list = [2,2,3,4,5,5,5,6,7,7,9,10,10,10,10]

print(unique_elements(numbers_list))
