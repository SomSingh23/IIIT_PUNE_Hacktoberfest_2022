# Only Number System Converter U Need

import ast
import math  # By Mahim


def get1():  # Function to check the input of decimal
    x = input("Please Enter any number: ")
    try:
        if isinstance(ast.literal_eval(x), int):  # Check for integer
            return int(x), 1
        elif isinstance(ast.literal_eval(x), float):  # Check for float
            return float(x), 2
    except:
        print("You have not entered a number.")  # Handling Error
        print("Please try again!!!")
        return get1()  # Requesting user to enter again


def get2():  # Function to check the input of binary
    x = input("Please Enter any number: ")
    n_t = {"0", "1", "."}
    t = set(x)
    try:
        if (
            t == n_t or t == {"1"} or t == {"0"} or t == {"1", "0"}
        ):  # Check if it is binary
            if isinstance(ast.literal_eval(x), int):
                return str(x), 1
            elif isinstance(ast.literal_eval(x), float):  # Check for fractional
                return str(x), 2
        else:
            print("Sorry, You have not entered binary number.")
            print("Please try again")
            return get2()
    except:
        print("You have not entered a number.")  # Handling Error
        print("Please try again!!!")
        return get2()  # Requesting user to enter again


def binary1(a):  # Function for converting to binary
    dig = []
    while a > 0:
        dig.append(a % 2)  # Storing the remainder when divided by 2
        a = a // 2  # Finding Quotient
    dig.reverse()  # Reversing the order
    print("The Binary form is: ", "".join(map(str, dig)))


def binary2(b):
    fraction = b - int(b)  # Finding fraction part of number
    b = int(b)
    dig = []
    while b > 0:  # Binary part of the integer part
        dig.append(b % 2)
        b = b // 2
    dig.reverse()
    dig.append(".")  # Adding decimal point
    precision = int(input("Enter the digit precision for fractional part: "))
    fract = []
    for z in range(precision):  # Using for loop to provide the req precision
        fraction *= 2  # Multiplying fraction part by 2
        if int(fraction) == 1:  # Checking the integer part
            fract.append(1)
            fraction -= 1  # Removing the integer part
        else:
            fract.append(0)
    dig.extend(fract)  # Combining binary of int and fraction
    print("The Binary digit is: ", "".join(map(str, dig)))


def decimal1(x):  # Function for Binary to Decimal
    deci = 0
    x = x[::-1]  # Reversing the number
    k = len(x)
    for j in range(k):  # Multiplying by the power of 2
        deci += int(x[j]) * math.pow(2, j)
    return int(deci)


def decimal2(y):  # Function for Fractional Binary to Decimal
    integer, fractional = y.split(".")
    z = decimal1(integer)  # Recursive call for non-fractional part
    dec = 0
    for i in range(len(fractional)):  # Multiplying by negative power of 2
        dec += int(fractional[i]) * math.pow(2, (-i - 1))
    z += dec
    return z


def choice(s):  # Program to ask user if he wants to try again
    if s.lower() == "yes" or s.lower() == "y":
        return True
    elif s.lower() == "no" or s.lower() == "n":
        return False
    else:
        print("Enter correct choice!!!")  # Handling error if req input is not given
        return choice(input("Please enter Yes or No: "))


print("Hello!")  # Main Function #
while True:  # Choosing binary to decimal and vice-versa
    main = int(
        input("Enter 1 for Decimal to Binary\n" "Enter 2 for Binary to Decimal: ")
    )

    if main == 1:  # Binary to Decimal
        print("Welcome to Decimal to Binary number system converter")
        while True:
            inp = get1()  # Calling function for input
            n = inp[0]
            m = inp[1]

            if m == 1:  # For integer part
                binary1(n)
            if m == 2:  # For floating part
                binary2(n)

            c = input("Do you want to try again (Yes or No): ")
            if choice(c) is True:
                continue
            else:
                break  # Terminating if user do not wish to continue

    elif main == 2:  # Decimal to Binary
        print("Welcome to Binary to Decimal number system converter")
        while True:
            inp = get2()  # Calling function for input
            n = inp[0]
            m = inp[1]

            if m == 1:  # For integer part
                print("The decimal form is: ", decimal1(str(n)))
            if m == 2:  # For floating part
                print("The decimal form is: ", decimal2(str(n)))

            c = input("Do you want to try again (Yes or No): ")
            if choice(c) is True:
                continue
            else:
                break  # Terminating if user do not wish to continue

    choices = input(
        "Do you want to exit the program(Y/N): "
    )  # Asking whether to exit program
    if choice(choices) is False:
        continue
    else:
        break
