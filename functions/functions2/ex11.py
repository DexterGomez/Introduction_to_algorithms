"""Write a function to check whetear a number is perfect or not"""

def is_perfect(number):
    aux = 0

    for i in range(1,number):
        if (number%i) == 0:
            aux += i
    return "is perfect" if aux == number else "is not perfect"

#-------------------------------------------------

num = int(input("Insert a number: "))

print(num,is_perfect(num))
