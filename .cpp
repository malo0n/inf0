#include <iostream>

using namespace std;

int main()
{
    int N,vmax,vi,ti;
    double s=0,vm=0;
    cin>>N>>vmax;
    for(int i=0;i<N;i++){
        cin>>vi>>ti;
        s+=vi*ti;
        
        vm+=ti;
        
    }
    double v=s/vm;
    if (v>vmax){
        cout<<1;
    }
    else cout<<0;
}
