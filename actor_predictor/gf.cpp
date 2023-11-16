#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size = 5;
    int ar[] = { 1 ,0,3 ,6,3};
 for(int i = 0; i < size-2;i++)
  {
    for(int j  = i+1;j < size-1; j++)
    {
        for(int k = j+1;k < size;k++)
        {
            if(ar[i] + ar[j] + ar[k] == 7)
            {
                cout<<"yes"<<endl;
                break;
            }         
        }
      break;
    
	}
	break;
  }

}

