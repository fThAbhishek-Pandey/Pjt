#include <iostream>
#include <math.h>
using namespace std;
int main() {
  cout << "hello !, are you ready to play number guessing game\n";
  int num;
  cout<<"enter a heigher limit \n";
  cin>>num;
  int hit = sqrt (num*sqrt(num)+3*num +20);
  
  for (int i=1;i<=11;i++)
    {
      if (i==11){
        cout<<"sorry !you loose , restart your  game\n";
        break;
      }  
      cout<<"enter , your "<<i<<"th chance\n";
      int target ;
      cin>>target;
      
      if (hit ==target)
    {
    cout<<"congratulations! you win the game in "<<i<<"time\n";
      break;
  }
     else if (hit > target)
     {
       cout<<"target is forward\n";
     }
      else 
       cout<<"target is before \n";
      
    }
  return 0;
}
