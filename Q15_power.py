#   Name                  :   Nikhil Nawani
#   University Roll no    :   2021330
#   Section               :   D
#   Q15. Write a python program to print x^y without using library function

print("\t\t\t\t*****INPUT*****")
x = int(input("Enter the value of x (base): "))
y = int(input("Enter the value of y : "))
power = 1
for i in range(y):
    power *= x
print("\t\t\t\t*****OUTPUT*****")
print("The Result is", power)