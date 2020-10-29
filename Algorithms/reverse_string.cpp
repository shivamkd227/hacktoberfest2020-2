#include <iostream>
using namespace std;

int main() {
int t,n=0,start,end,i;
char s[1000],temp;
cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        while(s[n]!=NULL)
        {
            n++;
            
        }
        start=0;
    start=0,end=n-1;
    while(end>start)
        {
            temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
        cout<<s<<endl;
    
    }
	return 0;
}