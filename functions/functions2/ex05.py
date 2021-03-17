"""Write a function to calculate the factorial of a number"""

def factorial(number):
    return 1 if number == 1 else number * factorial(number-1)
#---------------------------------------------------------

int_num = int(input("Insert a int number: "))
print("The factorial of",int_num,"is",factorial(int_num))
