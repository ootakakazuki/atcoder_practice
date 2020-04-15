#include <algorithm>
#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {3, 2, 1}; 
    vector<int> v2 = {1, 2, 3};
    next_permutation(v.begin(), v.end());
    next_permutation(v2.begin(), v2.end());
    cout<<v[0]<<v[1]<<v[2]<<endl;
    cout<<v2[0]<<v2[1]<<v2[2]<<endl;
}
