#include <bits/stdc++.h>

using namespace std;

int main() {

    //Para poner coma a los datos
    
    vector <int> datos;
    
    int n;
    
    while(cin>>n){
        datos.push_back(n);
        //cout<<","<<n<<endl;
    }
    /*
    for(int i=0 ; i < 731 ; i++){
    	cout << datos[i] << "," << endl;
	}*/
    

    vector<double> Medias(711,0);
    double sum=0;
    for(int i=0;i<21;i++){
        sum+=datos[i];
    }
    cout<<"sum:"<<sum<<endl;
    Medias[0]=sum/21;
    for(int i=1;i<711;i++){
        Medias[i]=Medias[i-1]+(datos[20+i]-datos[i-1])/21;
    }

    for(int i=0;i<Medias.size();i++){
        cout<<(double)Medias[i]<<", "<<endl;

    }


    return 0;
}
