# WAF tp print reverse of an integer
num = int(input("Enter a number: "))
reverseNum = str()
while num > 0:
    lastDigit = num % 10
    num //= 10
    reverseNum += str(lastDigit)
print(reverseNum)