#include <iostream>
using namespace std;
class complex{
    int a ,b;
public:
    complex(void); //constructor declaration
  void printnumber()
    {
      cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
  }
};
complex ::complex(void){
    a=20;
    b=0;
     
}
int main(){
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
    
    return 0;
    
    
}
