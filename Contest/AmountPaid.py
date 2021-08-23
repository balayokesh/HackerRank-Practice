# get input
product = int(input())
type = input()
amount = int(input())

if (product == 8):
    discount = 0.1
elif (product == 16):
    if (amount >= 10000):
        if (type == "Industry" or type == "University"):
            discount = 0.05
        elif (type == "Government Agency"):
            discount = 0.06
elif (product == 32):
    if (type == 'University'):
        discount = 0.075
    elif (amount < 50000):
        if (type == "Industry"):
            discount = 0.05
        elif (type == "Government Agency"):
            discount = 0.065
    elif (amount >= 50000):
        if (type == "Industry"):
            discount = 0.075
        elif (type == "Government Agency"):
            discount = 0.085
    elif (amount > 100000):
        if (type == "Industry" or type == "Government Agency"):
            discount = 0.1
    
final = int(amount * discount)
print (final)
output = int(amount - (amount * discount))
print (output)