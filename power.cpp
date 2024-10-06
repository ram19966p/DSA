# include <iostream>
using namespace std ;



void powBin(){
    double  x ;
    int n  = 3^6 ;

    if(n == 0) return 1.0;
    if(x==0)return 0.0;
    if(x==1)return 1.0;
    if(x== -1 && n%2 =  0) return 1.0;
     if(x== -1 && n%2 !=  0) return -1.0;


    
    long binForm  = n ;
    if(n<0){
        x = 1/x ;
        binForm  = - binForm ;
    }
    double  ans  = 1 ; 
    while (binForm > 0 ){
        if(binform % 2 == 1 ){
             ans *= x ;
           cout<<" The Bineary Exponensiol is "<<ans ;
        }
        x   *= x ;
        binForm /= 2 ;
    }
  //  return ans ;
}


int main()
{
   powBin();
   
   return 0 ;
}