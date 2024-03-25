//                                                            TASK : 2
                                             //          (SIMPLE CALCULATOR)



#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    
char calculator;
float a,b,Ans;

cout<<"Enter First Value A =";
cin>>a;

cout<<"Enter First Value B =";
cin>>b;

cout<<"Enter Which operation you peform +,-,*,/  "<<"\n";
cin>>calculator;


switch (calculator)
{
    case '+':
      Ans=a+b;
      cout<<Ans;
      break;
      
      case '-':
      Ans=a-b;
      cout<<Ans;
      break;
      
      case '*':
      Ans=a*b;
      cout<<Ans;
      break;
      
      case '/':
      Ans=a/b;
      cout<<Ans;
      break;
      
      default:
      cout<<"Unknown operator";
      break;
      
     }
     
     
    return 0;
}
