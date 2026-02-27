# 1. Ride Eligibility
age = int(input("Enter age: "))
height = int(input("Enter height in cm: "))
if age >= 12 and height >= 150:
    print("Eligible for the ride")
else:
    print("Not eligible for the ride")


# 2. Library Fine
days = int(input("Enter late days: "))
if days <= 5:
    print("Fine: ₹5")
elif days <= 10:
    print("Fine: ₹10")
else:
    print("Fine: ₹15")


# 3. Grade Based on Marks
marks = int(input("Enter marks: "))
if marks >= 90:
    print("Grade A")
elif marks >= 80:
    print("Grade B")
elif marks >= 70:
    print("Grade C")
elif marks >= 60:
    print("Grade D")
else:
    print("Grade F")


# 4. Temperature Status
temp = int(input("Enter temperature: "))
if temp < 0:
    print("Freezing")
elif temp <= 10:
    print("Very Cold")
elif temp <= 20:
    print("Cold")
elif temp <= 30:
    print("Warm")
else:
    print("Hot")


# 5. Cinema Ticket Price
age = int(input("Enter age: "))
price = 20
if age < 12:
    price *= 0.5
elif age >= 60:
    price *= 0.7
print("Final Price: ₹", price)


# 6. Magic Number Game
magic = 7
guess = int(input("Guess the number: "))
if guess < magic:
    print("Too low!")
elif guess > magic:
    print("Too high!")
else:
    print("Congratulations! Correct guess")


# 7. Shop Discount
amount = int(input("Enter purchase amount: "))
if amount >= 3000:
    amount *= 0.7
elif amount >= 2000:
    amount *= 0.8
elif amount >= 1000:
    amount *= 0.9
print("Final Amount: ₹", amount)


# 8. Leap Year
year = int(input("Enter year: "))
if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print("Leap Year")
else:
    print("Not a Leap Year")


# 9. Loan Eligibility
salary = int(input("Enter salary: "))
credit = int(input("Enter credit score: "))
if salary >= 3000 and credit >= 700:
    print("Eligible for Loan")
else:
    print("Not Eligible for Loan")


# 10. Employee Bonus
years = int(input("Enter years of service: "))
salary = int(input("Enter annual salary: "))
if years < 5:
    bonus = 0
elif years <= 10:
    bonus = salary * 0.10
else:
    bonus = salary * 0.20
print("Bonus: ₹", bonus)


# 11. Simple ATM
balance = 1000
choice = int(input("1-Balance 2-Withdraw 3-Deposit: "))
if choice == 1:
    print("Balance:", balance)
elif choice == 2:
    amt = int(input("Enter amount: "))
    if amt <= balance:
        balance -= amt
        print("Remaining Balance:", balance)
    else:
        print("Insufficient Balance")
elif choice == 3:
    amt = int(input("Enter amount: "))
    balance += amt
    print("Updated Balance:", balance)
else:
    print("Invalid Choice")


# 12. Greeting Based on Time
hour = int(input("Enter hour (0-23): "))
if hour < 12:
    print("Good Morning")
elif hour < 16:
    print("Good Afternoon")
elif hour < 20:
    print("Good Evening")
else:
    print("Good Night")


# 13. Celsius to Fahrenheit
c = int(input("Enter Celsius: "))
f = (c * 9/5) + 32
print("Fahrenheit:", f)
if c > 30:
    print("Hot")
elif c >= 15:
    print("Moderate")
else:
    print("Cold")


# 14. Even or Odd
num = int(input("Enter number: "))
if num % 2 == 0:
    print("Even")
else:
    print("Odd")


# 15. Positive, Negative or Zero
num = int(input("Enter number: "))
if num > 0:
    print("Positive")
elif num < 0:
    print("Negative")
else:
    print("Zero")


# 16. Largest of Three Numbers
a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))
if a >= b and a >= c:
    print("Largest:", a)
elif b >= c:
    print("Largest:", b)
else:
    print("Largest:", c)


# 17. Vowel or Consonant
ch = input("Enter character: ").lower()
if ch in "aeiou":
    print("Vowel")
else:
    print("Consonant")


# 18. Password Check
password = "python123"
user = input("Enter password: ")
if user == password:
    print("Access Granted")
else:
    print("Access Denied")


# 19. Divisible by 5 and 11
num = int(input("Enter number: "))
if num % 5 == 0 and num % 11 == 0:
    print("Divisible by 5 and 11")
else:
    print("Not Divisible by 5 and 11")


# 20. Character Type Check
ch = input("Enter character: ")
if ch.isupper():
    print("Uppercase Letter")
elif ch.islower():
    print("Lowercase Letter")
elif ch.isdigit():
    print("Digit")
else:
    print("Special Character")
