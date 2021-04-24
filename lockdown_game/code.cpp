
// Sample code to perform I/O:

#include <iostream>
#include<vector>
using namespace std;

int main()

{

   int n;

   cin >> n;

   vector<int> v;

   for(int i = 0; i < n; i++)

   {

       v.push_back(i+1);

   }

   string s;

   cin >> s;

 

   int i = 0;

   int c=  0;

   while(v.size()!=1)

   {

       if(s[i%s.size()] == 'y')

       {   

           v.erase(v.begin()+(c%v.size()));

           c = c-1;

 

       }

       i++;

       c++;

       i=i%s.size();

       c=c%v.size();

   }

 

   cout << v[0]; 

}
