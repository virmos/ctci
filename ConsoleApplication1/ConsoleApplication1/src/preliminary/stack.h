#define default_value 10

#ifndef _STACK_H_
#define _STACK_H_
template< class T > class Stack
{
public:
  Stack(int = default_value);//default constructor
  ~Stack()//destructor
  {
    delete[] values;
  }
  bool push(T);
  T pop();
  bool isEmpty();
  bool isFull();
private:
  int size;
  T* values;
  int index;

};

#endif // #ifndef _STACK_H_