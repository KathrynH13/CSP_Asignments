print("This is a budget calculator.")
income = float(input ("How much do you make a month? "))
rent = float(input ("How much do your rent cost? "))
utilities = float(input("How much do your utilities cost? "))
grocieries = float(input("How much do your grocieries cost? "))
transportation = float(input("How much do your transportation cost? "))
savings = income * .2
expenses = rent + utilities +grocieries +transportation
spend = income - expenses - savings
print(f"You make ${income:.2f}")
print(f"Your expenses are ${expenses:.2f}")
print(f"Your savings are ${savings:.2f}")
print(f"Your spending money is ${spend:.2f}")
prent = rent/income*100
putilities= utilities/income *100
pgrocieries = grocieries/income *100
ptransportation = transportation/income *100
psavings = savings/income *100
pexpenses = expenses/income *100
print(f"Your rent is {int(prent)}% of your income.")
print(f"Your utilities is  {int(putilities)}% of your income.")  
print(f"Your grocieries is  {int(pgrocieries)}% of your income.")
print(f"Your transportation  {int(ptransportation)}% is of your income.") 
print(f"Your savings is  {int(psavings)}% of your income.")
print(f"Your expenses is  {int(pexpenses)}% of your income.")