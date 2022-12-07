#include <iostream>
using namespace std;
class B;
class A 
{
  private:
      int a = 0;
  public:
      void print(A& x, B& y);
      friend void print(A& x, B& y);
};
class B
{
  private:
      int b = 6;
  public: 
      friend void print(A& x, B& y);
      friend void A::print(A& x, B& y); 
};
void A::print(A& x, B& y) 
{
  cout << "MEMBER FUNCTION OF A" << endl;
  cout << "A::a = " << x.a << endl;
  cout << "B::b = " << y.b << endl;
}
void print(A& x, B& y) 
{
  cout << "GLOBAL FUNCTION" << endl;
  cout << "A::a = " << x.a << endl;
  cout << "B::b = " << y.b << endl;
}
 
int main() 
{
   A a;
   B b;
   print(a,b);
   a.print(a,b);
}