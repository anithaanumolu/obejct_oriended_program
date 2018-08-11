#include<iostream>
using namespace std;
 
int main()
{
      int n, k, c, space, x, num = 1;
 
      cin >> n;
 
      x = n;
 
      for ( k = 1 ; k <= n ; k++ )
      {
          for ( c = 1 ; c <= k ; c++ )
          {
             cout << num;
             num++;
          }
 
          num--;
 
          for ( c = 1 ; c <= 2*x - 3 ; c++ )
              cout << " ";
 
          x--;
 
          if ( k != n )
          {
             for ( c = 1 ; c <= k  ; c++ )
             {
                cout << num;
                num--;
             }
          }
          else
          {
              num--;
              for ( c = 1 ; c <= k - 1 ; c++ )
              {
                 cout << num;
                 num--;
              }
          }
 
          printf("\n");
          num = 1;
      }    
  for ( k = n ; k >= 1 ; k-- )
      {
          for ( c = k ; c >= 1 ; c-- )
          {
             cout << num;
             num--;
          }
 
          num--;
 
          for ( c = 2*x-3 ; c>=1; c-- )
         // else
          //{
              cout << " ";
 
          x++;
 
          if ( k != n )
          {
             for ( c = k ; c >= 1  ; c-- )
             {
                cout << num;
                num++;
             }
          }
            
		else
		{
	     	  num--;
              for ( c = k-1 ; c >=1 ; c-- )
              {
                 cout << num;
                 num++;
              }
    }
 
          printf("\n");
          num = 1;
      }    
      return(0);
}

