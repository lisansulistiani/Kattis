#include<iostream>
using namespace std;
int main()
{
    int TC,Godzilla,MechaGodzilla,PasukanGodzilla,PasukanMechaGodzilla, i=0,z=0,hasil=0,hasil1=0;
    cin>>TC;
    while(TC--)
    {
        cout<<endl;
        cin>>Godzilla>>MechaGodzilla;
        i=0;
        z=0;
        int maksG=0;
        while(i<Godzilla)
        {
            cin>>PasukanGodzilla;
            if(maksG<PasukanGodzilla)
            {
                maksG=PasukanGodzilla;
            }
            i+=1;
        }
        int maksM=0;
        while(z<MechaGodzilla)
        {
            cin>>PasukanMechaGodzilla;
            if(maksM<PasukanMechaGodzilla)
            {
                maksM=PasukanMechaGodzilla;
            }
            z+=1;
        }
        if(maksG<=maksM)
            cout<<"MechaGodzilla"<<endl;
        else if(maksG>=maksM)
            cout<<"Godzilla"<<endl;
        //else
        //    cout<<"uncertain"<<endl;
        i=0;z=0;

    }

    return 0;
}
