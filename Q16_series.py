#   Name                  :   Nikhil Nawani
#   University Roll no    :   2021330
#   Section               :   D
#   Q16. Write a Python program to find the sum of the following series:
#   1+2^2/2!+3^3/3!+…….+n^n/n!

def calculate_factorial(num):
    if num == 0 or num == 1:
        return 1
    else:
        factorial = 1
        for i in range(2, num + 1):
            factorial *= i
        return factorial

print("\t\t\t\t*****INPUT*****")   
n = int(input("Enter the value of n: "))
series_sum = 0
for i in range(1, n + 1):
    term = (i ** i) / calculate_factorial(i)
    series_sum += term
print("\t\t\t\t*****OUTPUT*****")
print("The sum of the series is:", series_sum)