"""Write a function that checks whether a passed string is palindrome or not"""

def is_palindrome(string):
    key = 0
    start_point = 0
    end_point = len(string)-1

    while string[start_point] == string[end_point]:
        if start_point == end_point:
            print("Is palindrome")
            key = 1
            break
        start_point += 1
        end_point -= 1
    if key == 0:
        print("Is not palindrome")

#---------------------------
string = input("Insert a string: ")

is_palindrome(string)
