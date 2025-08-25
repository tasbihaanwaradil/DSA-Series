#print index of smallest and Largest number in an Array
numArray = [1,5,67,4,-8]
smallestNum = numArray[0]
largestNum = numArray[0]
i = 0
while i < len(numArray):
    if numArray[i] < smallestNum:
        smallestNum = numArray[i]
        print(smallestNum)
    elif numArray[i] > largestNum:
        largestNum = numArray[i]
        print(largestNum)
    else:
        print("Invalid Index")
    i += 1
