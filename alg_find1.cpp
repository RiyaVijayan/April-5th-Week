/*STL component Algorithm
non modifying sequence operation*/

#include<iostream>  
#include<algorithm>  
#include<vector>  
using namespace std;

bool iseven(int k)  
{  
    return((k%2)==0);							//unary function  
}  

  
int main()  
{  
	vector<int>u= {1,3,10,3,10,1,3,3,10,7,8,1,3,10};  
	vector<int>u1={1,3,10};  
	vector<int>::iterator ti; 
	
	cout<<"Main sequence:";
	for(int i=0;i<u.size();i++)
	cout<<u[i]<<" ";
	cout<<"\n";
	
	cout<<"Sub sequence:";
	for(int i=0;i<u1.size();i++)
 	cout<<u1[i]<<" ";
	cout<<"\n";


	ti=find_end(u.begin(),u.end(),u1.begin(),u1.end());  		//use of find_end() function
	cout<<"Sub sequence last found in the index "<<(ti-u.begin())<<"\n";  

	ti=find_first_of(u.begin(),u.end(),u1.begin(),u1.end()); 	//use of find_first_of function 
    	cout<<"First sequence found at index "<<(ti-u.begin())<<"\n"; 

	ti=adjacent_find(u.begin(),u.end());  				//use of adjacent_find() function

    	if(ti!=u.end())  
    	cout<<"Pair of sequence that is repeated in Mainsequence:"<<*ti<<"\n";

	int c=count(u.begin(),u.end(),3);				//use of count function
	cout<<"3 appears "<<c<<" times \n";
		
		
	int newc=count_if(u.begin(),u.end(),iseven);  			//use of count_if function
    	cout<<"Mainsequence contains "<<newc<<" even values\n";  


}   
