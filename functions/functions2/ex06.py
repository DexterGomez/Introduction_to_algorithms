"""Write a function to check wheter a number is in a given range"""

def in_range(n1,n2,element):
    if n1 > n2:
        if element in [i for i in range(n2,n1+1)]:
            print(element,"is in range")
        else:
            print(element,"is not in range")
    if n2 > n1:
        if element in [i for i in range(n1,n2+1)]:
            print(element,"is in range")
        else:
            print(element,"is not in range")
#---------------------------------------------------------
num1 = int(input("Insert a number for range: "))
num2 = int(input("Insert other number for delimit the range: "))

num3 = int(input("Insert a number: "))

in_range(num1,num2,num3)
