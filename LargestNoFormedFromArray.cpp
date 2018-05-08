/*
Largest Number formed from an Array

Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.
The result is going to be very large, hence return the result in the form of a string.

Input:
The first line of input consists number of the test cases. The description of T test cases is as follows:
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
In each separate line print the largest number formed by arranging the elements of the array in the form of a string.

Example:
Input:

2
5
3 30 34 5 9
4
54 546 548 60

Output:

9534330
6054854654

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int compare(string a, string b)
{
    string ab = a+b;
    string ba = b+a;
    
   //return ab.compare(ba)>0?1:0;
   return ab>ba?1:0;
}
int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
        vector<string> v;
        int n;
        
        cin>>n;
        for(int i=0;i<n;++i)
        {   
            string s;
            cin>>s;
            v.push_back(s);
        }
        
        sort(v.begin(),v.end(),compare);
        
        for(int i=0;i<n;++i)
        cout<<v[i];
        
        cout<<endl;
	}
	return 0;
}
