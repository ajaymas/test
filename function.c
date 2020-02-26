
 #include<stdio.h>

   void fun3() 
       {
       int fun3=25;        
       printf("value of fuc3 variable is %d\n",fun3);
       }
   void fun2()
        {
	int fun2=20;        
	printf("value of fun2 variable is %d\n",fun2);
	fun3();
        }
  void fun1()
      {
       int fun1 = 10;
       printf("value of fun1 variable is %d\n",fun1);
	fun2();
      }
 
 int main()
     {
      int mainVariable =5;
      printf("mainVariable is %d\n",mainVariable);
      fun1();
      return 0;
      }
