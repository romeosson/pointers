#include <iostream>

using namespace std;

void myswap(int * ptr1, int* ptr2)
{
  auto temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}


int main()
{
  int a = 25, b = 11;    

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

  int* ptr2= &b;
  int* ptr1= &a;
 
  myswap(ptr1, ptr2); 

  cout<<"a = "<<a<<", b = "<<b<<endl;


}
