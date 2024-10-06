# include <iostream>
using namespace std ;

 void subarray(){
    int n = 5 ; 
    int arr[n] = { 1, 2, 3, 4, 5} ;
      cout<<(n*(n+1))/2<< endl;
    for(int start = 0 ; start< n ; start++){
        for(int end = start ; end<n; end++){
            for( int i =  start ; i <= end  ; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl ; 
    }

 }

 // Brute Force Approch  
 // O(n^2)
 void subArraMax(){
    int n =  7 , makSum = __WINT_MIN__;
    int arr[n] = { 3, -4, 5, 4, -1 , 7 -8 } ;

    for(int start = 0 ; start< n ; start++){
        int curretSum = 0 ;
        for(int end = start ; end<n; end++){
            curretSum += arr[end];
            makSum = max(curretSum,makSum) ;
           
        }
        
    }
     cout<< "Maximam Array sum :"<<makSum<<endl ;
 }

  // Kadane's algorithm 
  void kadnArray(){
     int n =  7 , makSum = __WINT_MIN__;
    int arr[n] = { 3, -4, 5, 4, -1 , 7 -8 } ; 
      int curretSum = 0 ;
     for(int i = 0 ; i<n; i++  ){
         curretSum +=arr[i];
         makSum = max( curretSum  , makSum);
         if(curretSum <0 ){
            curretSum  = 0  ; 
         }
     }
        cout<< "The Max  Sum is a Subarray in using by kadane algorithm : "<<makSum<<endl;
  }

int main()
{
    //subArraMax();
   // subarray();
   kadnArray();

  return 0 ;
}