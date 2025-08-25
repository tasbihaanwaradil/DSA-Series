#Linear Search Algorithm
#[4,2,7,8,1,2,5]

def linearSearch(numArray, targetNum):
    i = 0
    while i < len(numArray):
        if numArray[i] == targetNum:
            return i
        i += 1
    return -1

numArray = [4,2,7,8,1,2,5]
targetNum = 50
result = linearSearch(numArray,targetNum)
print(result)

