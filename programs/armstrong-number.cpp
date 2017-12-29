#include <iostream>

using namespace std;

int main()
{
  int  num2, i, num, digit, sum;

  cout << "Enter first number: ";
  cin >> num2;

  cout << "Armstrong numbers between 1 to " << num2 << " are: " << endl;
  for(i = 1; i <= num2; i++)
  {
        sum = 0;
        for(num=i; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }

  return 0;
}
