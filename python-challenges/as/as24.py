import datetime 

print("==============================")
print("[First Date]")
fyear = int(input("Input Year: "))
fmonth = int(input("Input Month: "))
fday = int(input("Input Day: "))
firstdate = datetime.date(fyear,fmonth,fday)

print("==============================")
print("[Second Date]")
syear = int(input("Input Year: "))
smonth = int(input("Input Month: "))
sday = int(input("Input Day: "))
seconddate = datetime.date(syear,smonth,sday)

print("==============================")
print("The Difference in Days is:",seconddate-firstdate)