//  Task:
/*
The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are 
provided for you in the editor below.

Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. 
The implementation for the divisorSum(n) method must return the sum of all divisors of n.

Example:
n = 25
The divisors of 25 are 1, 5, 25. Their sum is 31.

n = 20
The divisors of 20 are 1, 2, 4, 5, 10, 20 and their sum is 42.
*/


class AdvancedArithmetic{
    public:
    virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (!(n % i)) {
                sum += i;
            }
        }
        return sum;
    }
};