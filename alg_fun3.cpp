/* STL Component Algorithm
 non modifying sequence operation for_each() */

#include <iostream>  
#include <algorithm>  
#include <vector>
using namespace std;
  
void newfun(int k)  
{  
    cout<<k<<" ";  			//function to be checked
}
  
struct newclass  
{  
    void operator () (int k)  		//it can be member function
     {
	cout<<k<<" ";
	}  
}newobj;
 
 
int main()  
{  
    vector<int>v;  
    v.push_back(50);  
    v.push_back(100);  
    v.push_back(150);  
    cout << "Vector elements are:\n";  
    for_each(v.begin(),v.end(),newfun);  	//for_each funct
    cout<<"\nVector elements are:\n";  
    for_each(v.begin(),v.end(),newobj);  
    cout<<"\n"; 

}
