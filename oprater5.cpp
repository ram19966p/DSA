# include <iostream>
using namespace std ;
 



int main()
{

    int a = 10 ; 
    int b = 2; 

    cout<<(a|b)<<endl; // or bitwise 
    cout<<(a&b)<<endl; // and bitwise 
    cout<<(a^b)<<endl;//XOr bitwise
    cout<<(a>>b)<<endl;//leftShift bitwise
    cout<<(a<<b)<<endl; //rightshift bitwise 
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long long int  )<<endl;
     cout<<sizeof(short int  )<<endl;
   return 0 ;
} 