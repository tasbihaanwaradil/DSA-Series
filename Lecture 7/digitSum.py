# Calculate Sum of Digits of a number
num = int(input("Enter a number: "))
digitSum = 0
while (num > 0):
    lastDigit = num % 10
    num //= 10
    digitSum += lastDigit
print("Sum of Digits: ", digitSum) 

# 1 + 4 + 5 = 10