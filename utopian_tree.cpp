//https://www.hackerrank.com/challenges/utopian-tree/problem
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n) {
    int h=1;
    if(n==0)
    {
        return 1;
    }
    else{
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                h++;
            }
            else {
                h= h*2;
            }
        
        }
    
    return h;
}
void main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        cout<<utopian(n)<<endl;
    }
    
}
