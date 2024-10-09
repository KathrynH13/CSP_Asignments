


def get_financials(type):

    money = float(input(f"What is your {type}? \n"))

    return money


def cal_per(type, amount,income):
    percent = amount/income *100

    return f"Your {type} is {percent} "

income = get_financials("income")
rent = get_financials('rent') 
utilities = get_financials("utilities")
grocieries = get_financials("grocieries")
transportation = get_financials("transportation")
savings = get_financials("savings")
expenses = get_financials("expenses")


print(cal_per("rent %", rent, income))
print(cal_per("utilities %", utilities, income))
print(cal_per("grocieries %", grocieries, income))
print(cal_per("transoportation %",transportation,income))
print(cal_per("savings %", savings, income))
print(cal_per("rent %", rent, income))

