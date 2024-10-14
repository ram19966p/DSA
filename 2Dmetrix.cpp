# include <iostream>

using namespace std ;


 int  mat(int  n[3][4] , int tar  ){
  
    int  s = 0 , end = 12 ;
    while(s<=end){
        int  mid = s+(end-s)/2;
        if(n[mid][mid] == tar){
            return true ;
        }

    }
    
        cout<<endl;
       
    
    return false ;

}




int main()
{
    int n[3][4] = { {1,2,3,4}, {5,6,7,8}, {11,12,13,14} } ;
    int  tar  = 13 ;
   
  bool asn =  mat(n , tar );
  cout<<" The Target  is is : "<< asn << endl ; 

return 0 ;
}