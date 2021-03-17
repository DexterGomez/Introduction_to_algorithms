"""Write a function that takes a number as a parameter and check the number is prime or not"""

def is_prime(number):
    prime = 0
    for i in range(2,number):
        if (number%i) == 0:
            prime += 1
            break
    return "is prime" if prime == 0 else "is not prime"
#----------------------------------------
number = int(input("Insert a number: "))

print(number,is_prime(number))
