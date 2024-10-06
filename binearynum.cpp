# include <iostream>
using namespace std ;

int decTobinary(int decNum ){
    int ans = 0 , pow = 1  ;
    while(decNum > 0 ){
     int  res  = decNum % 2;
     decNum /= 2;
     ans += (res *pow);
     pow *=  10;
    

    }

 return ans;
}


    int binaryToDec(int Bin){
        while(Bin > 0 ){
            int r ;
        }
    }
 
int main()
{
int decNum = 50 ;
for(int i = 1 ; i<= 10 ; i++){
    cout<<decTobinary(i)  << endl ;
}

   return 0 ;
}