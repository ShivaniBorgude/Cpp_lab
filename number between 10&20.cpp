#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    
    if(num>=10 && num<=20){
      cout<<"The number "<<num<<" is between 10 & 20.\n";
    }
    else{
      cout<<"the number "<<num<<" is not between 10 & 20.\n";
    }
    
    return 0;
}