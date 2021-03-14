/*Assignment-1:- Write a Program using recursive function to calculate the factorial of a given number. Also draw the recursion tree for the test.*/
#include <iostream>
using namespace std;

class factorialCal{
    private:
        int result;

    public :
        //setter
        int setFactorial(int n){
            if(n > 1)
                return result = n * setFactorial(n - 1);
            else
                return result = 1;
        }

        //getter
        int getFactorial(){
            return result;
        }
};

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    factorialCal calculateFactorial;

    calculateFactorial.setFactorial(n);

    cout<<"\n Factorial of " << n <<": "  << calculateFactorial.getFactorial()<<"\n";

}
