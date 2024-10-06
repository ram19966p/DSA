// Parametrise function 

# include <iostream>
using namespace std ;
int sum (int q , int b ){
    int c = q+b ;
    return c ;
}
// min of 2 num 
int min( int a , int b ){
    if(a<b){
      return  a ;
    }else{
      return b ;
    }
}
 //  sum of n number is 
int  sum(int n  ){
    int sum  = 0 ;
    for(int  i =0;i <= n ; i++ ){
        sum +=i;
   
    }
     return sum ;
}

int fact(int n){
    int fact = 1 ; 
    for(int i=1; i<=n; i++){
   
   fact *=i;
  
    }
     return fact ;
}


//pass by value 
int sum1 (int a , int b ){
     a= a+15;
     b= b+10 ;
    return a+b;
}
int change(int x ){
    x = 2*x;
    cout<<" x = "<<x<<endl;

}

// digit Sum 
int digitsum(int x ){
    int didgit = 0  ;
  while (x>0)
  {
   int lastdidgit =  x%10;
   x =  x/10;
   didgit+=lastdidgit;
   
  }
  
return didgit ;
}

int fact1(int n ){
  int fac = 1 ; 
  for(int i =0 ; i <= n ; i++){
    fac *=i;

  }
  return fac ;
}
//binomiyal cofficient 
int binomiyal(int a , int b ){
int fn = fact1(a);
int fr = fact1(b);
int ncr = fact1(a-b);
return fn/fr*ncr;

    
}
int main()
{
  int n ,  r ;
  n = 2 ;  r = 6 ; 
cout<<"binomiyal is "<<binomiyal(n , r );
  return 0 ;
}