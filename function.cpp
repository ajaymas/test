// next, step, continue, breakpoint,
//step, backtrace, frame, info, print
#include <iostream>
using namespace std;

  void fun3() {
    int fun3Variable =30;
    cout << fun3Variable << endl;
    }

    void fun2() {
      int fun2Variable =25;
      cout << fun2Variable << endl;
      fun3();

   void fun1() {
    int fun1Variable =20;
    cout << fun1Variable << endl;
    fun2();
    }
 int main() {
    int MainVariable =2;
    cout << MainVariable << endl;
    fun1();
    return 0;
    }
