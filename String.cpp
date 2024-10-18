# include <iostream>
using namespace std ;

int main()
{
// char  str[10] = "Ramlakhan"  ; 
//  int len =  0 ;
// for( int  i = 0 ; i<str[i] != '\0' ; i++){
// len++ ;
// }
// cout << "  Length of String : " << len <<  endl ; 
string   str = "Ram lakhan" ; // Thsi is dynamic nature because runtime resize  
str = "Jay shree Ram" ;
string str1 = " jay bajrang bali" ;
string s3 = str + str1 ; // concatenation
cout<< s3.length() << endl ;
getline(cin ,s3);
cout<<s3 << endl ;
for( int i  = 0 ; i<s3.length() ; i++){
    cout << s3[i] <<" "; 
}
cout<< endl ; 



return 0 ;
}