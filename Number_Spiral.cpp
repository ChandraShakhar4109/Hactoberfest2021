/* Number Spiral Problem Link is below from CSES */
/* https://cses.fi/problemset/task/1071 */

#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli t,y,x;
    cin>>t;
    while(t>0){
        cin>>y>>x;
        lli z=max(y,x);
        lli ap=z*(z-1)+1;
        lli ans;
        if(z%2==0)
            ans=ap+y-x;
        else
            ans=ap+x-y;
        cout<<ans<<endl;
        t--;    
    }
}
