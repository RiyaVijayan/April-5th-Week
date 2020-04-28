/* STL component Algorithm
   Non modifying sequence operations*/

#include<iostream>  
#include<algorithm>  
#include<array>
using namespace std;  
int main()  
{  
	array<int,6>arr={25,27,29,31,33,35};  
	if(all_of(arr.begin(),arr.end(),[](int k) {return k%2;} ) )  	//use of all_of function
	cout <<"All the array elements are odd"<<endl;  
	
	int ar[6] = {2, 5, -7, -9, 3, 5};  
    	all_of(ar, ar+6, [](int x) { return x>0; })?cout<<"All elements are positive \n":cout<<"All elements are not positive"; 

	cout<<"\n";
}  
