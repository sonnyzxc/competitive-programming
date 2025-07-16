grossprofit = input("Input Gross Profit: ")
netprofit = input("Input Net Profit: ")
sales = input("Input Sales: ")

gpm = round(int(grossprofit)/int(sales) * 100,2)
print("\nGross Profit Margin (GPM):",gpm,"%")

npm = round(int(netprofit)/int(sales)*100,2)
print("\nNet Profit Margin (NPM):",npm,"%")
