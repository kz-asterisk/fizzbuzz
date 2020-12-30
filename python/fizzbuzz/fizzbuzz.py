def isFizz(num: int) -> bool:
    if (num % 3 == 0):
        return True
    else:
        return False


def isBuzz(num: int) -> bool:
    if (num % 5 == 0):
        return True
    else:
        return False


def main():
    for i in range(1, 30):
        if (isFizz(i)) & (isBuzz(i)):
            print(f'fizzbuzz')
        elif (isFizz(i)):
            print(f'fizz')
        elif (isBuzz(i)):
            print(f'buzz')
        else:
            print(f'{i}')


if __name__ == "__main__":
    main()
