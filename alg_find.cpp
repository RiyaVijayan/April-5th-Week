/* STL Components Algorithm
   Non modifying sequence operations */

#include<iostream>  
#include<algorithm>  
#include<vector>
using namespace std;
 
bool isodd(int i)  
{     
    return((i%2)==1);  						//unary function
}  
 
int main()  
{  
	vector<int>v{50,60,75,80};   
	int r=60;  
	vector<int>::iterator ti;  

	cout<<"vector elements are:";  
	for(int k=0;k<v.size();k++)  
		cout<<v[k]<<" ";  
	cout<<"\n";  

	ti=find(v.begin(),v.end(),r);				//use of find() function

	if(ti!=v.end())  
	{  
		cout<< "The element 60 is found at position:";  
		cout<<ti-v.begin() +1<<"\n";  
	}  
	else  
		cout<<"Element does not exist.\n "; 


	ti=find_if(v.begin(),v.end(),isodd); 			//use of find_if() function
	cout<<"first odd element among these is "<<*ti<<"\n"; 


	ti=find_if_not(v.begin(),v.end(),[](int k){return k%2;} );  
    	cout<<"the first even value is "<<*ti<<"\n";  		//use of find_if_not function


}
