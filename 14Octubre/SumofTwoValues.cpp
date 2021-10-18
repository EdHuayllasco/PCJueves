#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >>x;
    map<int, int> PosicionValor;
    for (int i = 0; i < n; i++)
    {
        int valor;
        cin>>valor;
        // se usa count x - value, ya que por defecto el count lo cuenta como 0 para cualquiera posicion vacia en el map
        if(PosicionValor.count(x-valor)){
            cout<<i+1<<" "<<PosicionValor[x-valor]<<endl;
            return 0;
        }
        PosicionValor[valor]=i+1;
    }
    cout<<"IMPOSSIBLE";
}