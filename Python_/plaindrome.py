def pali(alpha):
    if len(pali)==1:
        print('palindrome')
    else:
        if alpha[0]==alpha[-1]:
            pali(alpha[1:-1])
        else:
            print('not palindrome')