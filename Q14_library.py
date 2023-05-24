#   Name                  :   Nikhil Nawani
#   University Roll no    :   2021330
#   Section               :   D
#   Q14. Write a program in Python. A library charges a fine for every book returned 
#   late. For First 5 days the fine is 50 paisa/day, for 6-10 days fine is one 
#   rupee/day and above 10 days fine is 5 Rupees/ per day. If you return the book after
#   30 days your membership will be cancelled. Write a program to accept the number 
#   of days the member is late to return the book and display the fine or the 
#   appropriate message.

print("\t\t\t\t*****INPUT*****")
days = int(input("Enter the number of days the book is late: "))
print("\t\t\t\t*****OUTPUT*****")
if days <= 5:
    fine = 0.50 * days
elif 6 <= days <= 10:
    fine = 2.5 + 1.00 * (days-5)
elif days > 10 :
    fine = 7.5 + 5.00 * (days-10)
if days >=30:
    print("Membership Cancelled")
print("The fine amount is: Rs", fine)