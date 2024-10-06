# include <iostream>
using namespace std ;



void changeA(int*  ptr ){ // pass by reference using alias 
    *ptr = 20 ;
    }



    void poiterarra(){
        int arr[] = { 1, 2, 3,4,5} ;
        // cout<< *(arr) << endl; //pointer 
        //   cout<< *(arr+1) << endl; //pointer 
        //     cout<< *(arr+2) << endl; //pointer 
        //       cout<< *(arr+3) << endl; //pointer 
        //         cout<< *(arr+4) << endl; //pointer 

        // 
        
        int* ptr1  ;
        int* ptr2 = ptr1;
        cout<<ptr1 <<endl ;
        cout<<ptr2 <<endl ;
        cout<<(ptr1 == ptr2)<< endl ;

    }

void poiArr(){
int arr[] ={ 10 , 20 , 30 , 40 } ;
int *ptr = arr ;
cout<< *(ptr +1)<<endl ;
cout<< *(ptr+3)<< endl;
ptr++;
cout<< *ptr << endl ;
}

int main()
{ 
//     int a = 10 ;
//    changeA(&a);
//    cout<<" Inside main final value using Pass by value in the help of pointer :"<< a << endl ; 
  
int a = 10 ;
int* ptr = &a ;
cout<<ptr<<endl ;
ptr = ptr+2;
cout<<ptr<<endl; // hexadecimal change  
  poiterarra();
  poiArr() ;
return 0 ;

}