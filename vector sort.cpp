#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
     int n;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<n; i++)
        cout<<vec[i]<<" ";
    return 0;
}