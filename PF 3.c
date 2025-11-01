#include <stdio.h>
int main()
{ 
 int num1,num2 

 std::cout <<"Enter the first number:";
 std::cin >> num1;
 
 std::cout <<"Enter the second number:";
 std::cin >> num2;
 
 std::cout << "After swapping:
 	num1 = "<< num1 <<", 
 	num2 = "<< num2 << std::end1";
 	  
 	  return 0
} 


#include <stdio.h>
int main()
{ 
 double salary, tax, taxrate, net salary;
 std::cout <<"Enter the salary:";
 std::cin >> salary;
 
 std::cout <<"Enter tax rate:";
 std::cin >> taxrate;
 
 tax=salary * (taxrate / 100);
 net salary= salary - tax;
 
 std::cout << "\n tax to be paid:";
 std::cout << "salary after tax is paid:";
 
   return 0
 
} 


#include <stdio.h>
int main()
{ 
 double distance, time taken;
 std::cout << "Enter the time traveled in hours : ";
 std::cin >> time taken;
 
 std::cout << "Enter the distance traveled in miles : ";
 std::cin >> distance;
 
 double average speed = distance / time taken;
 
 std::cout << "\n average speed: " << average speed << "miles per hour" << std::end1;
 
   return 0:
}  


#include <stdio.h>
int main()
{ 
 int testInteger=30000000000;
 printf("Number is %d,testInteger");
   
   //data type cant hold a value as large as 3000000000
}
