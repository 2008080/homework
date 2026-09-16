#include<bits/stdc++.h>
// #include<cstdlib>
// #include<windows.h>
using namespace std;
const int N=3000;
int n,q,p[N],num;
bool st[N];
int main(){
    n=1000;
    for (int i=2;i<=n;i++) {
        if (!st[i]) {
          st[i]=true;
            num++;
            p[num]=i;
            printf("%d\n",i);
        }
        for(int j=1;j<=num&&p[j]<=n/i;j++) {
            st[i*p[j]]=true;
        }
    }
    return 0;
}