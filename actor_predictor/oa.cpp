#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int total_chapters;
    cin>>total_chapters;

    int start_day;
    int end_day;
    
    vector<int>v;
    for(int i  = 0; i < end_day+1;i++)
    {
     v.push_back(i%total_chapters);
    }

    int sum = 0;
    
    for(int i = start_day; i < end_day;i++)
    {
        sum  = sum + v[start_day + 1];
    }

    cout<<sum<<endl;
}