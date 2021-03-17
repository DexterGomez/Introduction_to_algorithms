"""Write a function that accepts a string and calculate the number of upper case letters and lower case letters"""

def count_letters_type(string):
    upper = 0
    lower = 0
    for i in string:
        if i.isupper():
            upper += 1
        if i.islower():
            lower += 1
    print("There is",upper,"upper case letters and",lower,"lower case letters.")

#------------------------------
string = input("Insert a string: ")
count_letters_type(string)
