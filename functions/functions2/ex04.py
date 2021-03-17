"""Write a program to reverse a string"""

def reverse_string(string):
    result_string = ""
    contador = len(string)-1

    while contador >= 0:
        result_string += string[contador]
        contador -= 1
    return result_string
#---------------------------------------------
string_input = input("Insert a string: ")
print(reverse_string(string_input))
