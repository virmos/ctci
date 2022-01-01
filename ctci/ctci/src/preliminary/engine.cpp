#include<iostream>
#include "stack.h"
#include "bst.h"

using namespace std;

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
};

void test_bst()
{
  Node* root = nullptr;
  add_node(&root, 2, "2");
  add_node(&root, 1, "1");
  add_node(&root, 0, "0");
  add_node(&root, 3, "3");
  add_node(&root, 5, "5");
  add_node(&root, 4, "4");
  add_node(&root, 6, "6");
  printBST(root);
}

int main() 
{
  test_stack();
  return 0;
}
