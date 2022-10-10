def a():
    print('hello A')
    def p():
        print('hello p')
    return p()
print(a())