#include <bits/stdc++.h>
using namespace std;

void pairsum(int a[],int n,int x){
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]==x)
        {
            int c =1,d=1;
            for(int z=i+1;z<j;z++)
            {
                if(a[z]==a[i])
                c++;
                if(a[z]==a[j])
                d++;

            }
            if(a[i]<a[j])
            {
                for(int m=0;m<(c*d);m++)
                cout<<a[i]<<" "<<a[j]<<endl;
                i=i+c;
                j=j-d;
            }
            else
            {
                for(int x=0;x<(c*d);x++)
                cout<<a[j]<<" "<<a[i]<<endl;
                i++;
                j--;
            }
        }
        else
        {
            if(a[i]+a[j]>x)
            j--;
            else
            i++;
        }


    }


}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int x;
    cin>>x;
    pairsum(a,n,x);
}
