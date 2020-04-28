/* STL component Algorithm
   Non modifying sequence operations any_of() function*/
#include <iostream>  
#include <algorithm>  
#include <array>  
using namespace std;
bool abc(int b)					//unary function  
{  
    return b<0;  
}  
  
int main()  
{  						//use of any_of function
int arr[7] = {2,4,1,5,10,3,14};  
int p = sizeof(arr)/sizeof(arr[0]);  
cout<<"Array elements are:";  
for(int k=0; k<p; k++)  
cout<<arr[k]<<" ";
cout<<"\n";  
any_of(arr,arr+6, [](int k){return k%2;})?cout <<"There are some ele which are multiple of 2":cout<<"No ele are multiple of 2";    
cout<<"\n";
if(none_of(arr,arr+p,abc))  			//use of none_of function
cout<<"None of the elements in the range are negative"<<endl;  
else  
cout<<"The range has at least one element that is negative"<<endl;  


}  
