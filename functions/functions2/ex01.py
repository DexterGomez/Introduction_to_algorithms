"""Write a funciton to find the max of three numbers"""

def max(num1,num2,num3):
    if num1>num2 and num2>num3:
        return num1
    if num1>num3 and num3>num2:
        return num1
    if num2>num1 and num2>num3:
        return num2
    if num2>num3 and num3>num2:
        return num2
    if num3>num1 and num1>num2:
        return num3
    if num3>num2 and num2>num1:
        return num3

#----------------

number1 = int(input("Introduce a number: "))
number2 = int(input("Introduce another number: "))
number3 = int(input("Introduce the third number: "))

print("The max number is",max(number1,number2,number3))

