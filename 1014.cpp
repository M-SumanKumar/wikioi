#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <set>
#include <algorithm>

using namespace std;



int main() {
    int v;
    cin >> v;
    int n;
    cin >> n;
    int *f =new int[n];
    for(int i=0; i<n; i++)
        f[i]=0;
    vector<int> th;
    while(n--) {
        int a;
        cin >> a;
        th.push_back(a);
    }

    for(int i=0; i<th.size(); i++) {
        for(int j=v; j>=th[i]; --j) {
            if(f[j]<f[j-th[i]]+th[i])
                f[j]=f[j-th[i]]+th[i];

        }
    }

    cout << f[v];
    return 0;

}
