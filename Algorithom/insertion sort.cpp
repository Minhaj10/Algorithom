#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100],a,b,c,d,n;
    cout<<"Number of Element-->";
    cin>>n;

    for(int i=0;i<n;i++){

        cin>>ar[i];
    }
    for(int i=1;i<n;i++){
        d=ar[i];
        int j=i-1;
        while(j>=0&& ar[j]>d){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=d;
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
