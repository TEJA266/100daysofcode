# Get string
str1 = input("Please enter string with numbers: ")
# extract numbers and put them in a list
numbers = []
numstr=""
for x in str1:
if x.isdigit():
numstr = numstr+x
elif numstr:
if "9" not in numstr:
numbers.append(int(numstr))
numstr = ""
if numstr:
numbers.append(int(numstr))

print(numbers)
print(sorted(numbers)[-1])
