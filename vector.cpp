#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int n, k, x, y, q;
cin >> n >> q;
int *a[n];
for (int i = -1; ++i < n;) {
    cin >> k;
    a[i] = new int[k];
    for (int j = -1; ++j < k; cin >> a[i][j]);
}
while(q--){
    cin >> x >> y;
    cout << a[x][y] << endl;
}
    return 0;
}
    return 0;
}