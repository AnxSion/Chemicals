#include <iostream>
#include <string>
#include "chemicals.h"

using namespace std;


enum elementProperties{
    atomicNumber,
    electron,
    neutron,
    type
};

enum standardModel{
    submass,
    subcharge,
    subspin
};

int main (){
    int n=39;
    float upQuarkCount=(element[n][atomicNumber] * 2)+element[n][neutron];
    float downQuarkCount=(element[n][neutron] * 2)+element[n][atomicNumber];
    float upmass=upQuarkCount * upQuark[submass];
    float downmass=downQuarkCount * downQuark[submass];
    float electronmass= element[n][electron] * electronFermion[submass];
    string configuration="";
    int configcount=1;
    int i=element[n][electron];
    int valency=0;

   if (i<=2){
    configuration=to_string(i);
    valency=2-i;
   }
   else if (i<=10){
    configuration="2";
    i=i-2;
    configuration=configuration.append(",");
    configuration=configuration.append(to_string(8-i));
    if(i<4){
        valency=i;
    }
    else{
        valency=8-i;
    }
   }
   else{
    while (i>8){
        if (configcount==1){
            configuration="2";
            i=i-2;
            configcount=configcount+1;
        }
        else{
            configuration=configuration.append(",8");
            i=i-8;
        }
    }
    if(i<4){
        valency=i;
    }
    else{
        valency=8-i;
    }
    configuration=configuration.append(",");
    configuration=configuration.append(to_string(i));
   }

    cout<<"\n"<<elementName[n];
    cout<<"\nAtomic number: "<<element[n][atomicNumber];
    cout<<"\nConfiguration: "<<configuration;
    cout<<"\nType: "<<elementType[element[n][type]];
    cout<<"\nValency: "<<valency;
    cout<<"\nElectron number: "<<element[n][electron];
    cout<<"\nNeutron number: "<<element[n][neutron];
    cout<<"\nNumber of Up Quarks: "<< upQuarkCount;
    cout<<"\nNumber of Down Quarks: "<< downQuarkCount;
    cout<<"\nUp Quark Mass "<<upmass <<" MeV/c2";
    cout<<"\nDown Quark Mass: "<<downmass <<" MeV/c2";
    cout<<"\nElectron Mass: "<<electronmass <<" MeV/c2";
    cout<<"\nAtomic Mass: "<<element[n][atomicNumber]+element[n][electron]<<" u";

    return 0;
}