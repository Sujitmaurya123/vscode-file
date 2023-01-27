#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
   // for (int i = 0; i < v.size(); i++)
   // {
    //    cout << v[i] << " ";
    //}
    for(auto &value :v){
        cout<<value<<" ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    printvec(v);
    // vecter reverse 
    //reverse(v.begin(),v.end());
    //printvec(v);
    return 0;
}