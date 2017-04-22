#include<iostream>
 
using namespace std;
 
int main()
{
   int first[10][10], i, j;
 
   for (  i = 0 ; i < 3 ; i++ )
      for ( j = 0 ; j < 3 ; j++ )
         cin >> first[i][j];
  
   for ( i = 0 ; i < 3 ; i++ )
   {
      for ( j = 0 ; j < 3 ; j++ )
         cout << first[i][j] << "\t";
 
      cout << endl;
   }
 
   return 0;
}
