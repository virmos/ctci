#include<iostream>
#include "stack.cpp"
using namespace std;

void test_stack();

void test_stack()
{
  Stack <double> stack1;
  Stack <int> stack2(5);
  int y = 1;
  double x = 1.1;
  int i, j;
  cout << "\n pushed values into stack1: ";

  for (i = 1; i <= 11; i++) //start enter 11 elements into stack
  {
    if (stack1.push(i * x))
      cout << endl << i * x;
    else
      cout << "\n Stack1 is full: ";
  }

  cout << "\n\n popd values from stack1 : \n";
  for (j = 1; j <= 11; j++)
    cout << stack1.pop() << endl;



  cout << "\n pushd values into stack2: ";

  for (i = 1; i <= 6; i++) //start enter 6 elements into stack
  {
    if (stack2.push(i * y))
      cout << endl << i * y;
    else
      cout << "\n Stack2 is full: ";
  }

  cout << "\n\n popd values from stack2: \n";
  for (j = 1; j <= 6; j++)
    cout << stack2.pop() << endl;
  cout << endl << endl;
}

int main()
{
  test_stack();
  return 0;
}

