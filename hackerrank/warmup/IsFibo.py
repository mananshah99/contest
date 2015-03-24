from math import *
for i in range(input()):
    n = input()
    r1 = sqrt(5*n**2+4)
    r2 = sqrt(5*n**2-4)
    #testing algorithm
    isSquare = (r1%1 == 0) or (r2%1==0)
    if(isSquare):
        print "IsFibo"
    else:
        print "IsNotFibo"