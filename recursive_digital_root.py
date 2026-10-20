def sum_digits(n):
    if n == 0:
        return 0

    return n % 10 + sum_digits(n // 10)


def digital_root(n):
    if n < 10:
        return n

    return digital_root(sum_digits(n))


num = int(input("Enter a positive number: "))

if num < 0:
    print("Please enter a positive number.")
else:
    print("Digital root:", digital_root(num))