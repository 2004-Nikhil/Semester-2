#   Name                  :   Nikhil Nawani
#   University Roll no    :   2021330
#   Section               :   D
#   Q13. Write a python program to accept the cost price of a bike and display the 
#   road tax to be paid according to following criteria:
#   Cost price (in Rs)  Tax
#   >100000             15%
#   >50000 and <=100000 10%
#   <=50000             5%

print("\t\t\t\t*****INPUT*****")
cost_price = float(input("Enter the cost price of the bike : "))
if cost_price > 100000:
    tax = 0.15*cost_price
elif cost_price > 50000:
    tax = 0.1*cost_price
else:
    tax = 0.05*cost_price
print("\t\t\t\t*****OUTPUT*****")
print("The road tax to be paid is: Rs", tax)