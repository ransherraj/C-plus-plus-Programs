
// This progaram is to find the longest string in the string array.
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int
main ()
{

  int n, l = 0, k = 0;
  cout << "Enter the size:";
  cin >> n;
  bool flag = false;

  int arr2[n];
  string arr[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      cout << "Enter Array:";
      if (l <= arr[i].size ())
	{
	  if (l == arr[i].size ())
	    {
	      flag = true;

	    }
	  l = arr[i].size ();
	  k = i;


	}
    }
  cout << "longest sring: " << arr[k] << endl;;
  if (flag == true)
    {
      cout << "More than 1 strings are equal ";
    }

}
