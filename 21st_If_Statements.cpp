#include <iostream>
using namespace std;
 

int main()
{
    bool isMale = false;
    bool isTall = true;

//    if(Condition){
//        Statements
//    }

  if (isMale && isTall){ // Other operator || means or   
      cout << "You are a tall male\n";
  } else if (isMale && !isTall){
      cout << "You are a short male\n";
  } else if (!isMale && isTall){
      cout << "You are not a male but you are tall!\n";
  }
  else
  {
      cout << "You are not male\n";
  }
  
  
  
    return 0;
}