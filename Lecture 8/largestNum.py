numArray = [10,20,60,90]
largestNum = numArray[0]
i = 0
while i < len(numArray):
    if numArray[i] > largestNum:
        largestNum = numArray[i]
    i += 1
print(largestNum)