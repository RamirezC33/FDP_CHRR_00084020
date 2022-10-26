//Carlos Humberto Ramirez Rodriguez
//utilizar minusculas :)
#include <iostream>
using namespace std;


bool v (string p, int t){
    for (int i = 0; i < t/2; i++){
        
        if (p[i] != p[t-1-i]){
           
            return false;
        }
    }
    return true;
}


int main (){
    
    
    string p;
    cout<<"\nPor favor ingresar solamente minusculas"<<endl;
    cout<<"\nIngrese una palabra: "<<endl;
    cin>>p;
    if(v(p, p.length())){
        cout<<"La palabra es un palindromo"<<endl;
    }
    
    else{
        cout<<"La palabra no es palindromo"<<endl;
    }
    
    
    return 0;
}