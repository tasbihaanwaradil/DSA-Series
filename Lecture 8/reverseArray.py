def reverseArray(numArray, start, end):
    while start < end:
        #swaping elements
        numArray[start], numArray[end] = numArray[end], numArray[start]
        start += 1
        end -= 1
    return numArray

numArray = [4,2,7,8,1,2,5]
start = 0
end = len(numArray)-1 #last Index
result = reverseArray(numArray,start,end)
print(result)