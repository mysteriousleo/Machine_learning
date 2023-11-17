#include<bits/stdc++.h>
using namespace std;

vector<int> find_common(int ar1[],int ar2[],int size1 , int size2)
{
    vector<int>result;
    int i = 0 , j =0;

    while(i < size1 && j < size2){
        if(ar1[i] == ar2[j]){
            result.push_back(ar1[i]);
            i++;
            j++;
        }
        else if(ar1[i] < ar2[j]){
            i++;
        }
        else if(ar1[i] < ar2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    return result;
}
int main()
{
    int ar[] = { 1 ,2,7,6,4,8,3};
   int ar2[] = {1,2,7,5,2,4,1,3} ;

    vector<int> v;
    v = find_common(ar,ar2,7,7);

    for(int i = 0; i < v.size();i++)
    cout<<v.at(i)<<" ";

    
    

} 
