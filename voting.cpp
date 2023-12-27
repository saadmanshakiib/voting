#include<iostream>
#define name "Shakib"
using namespace std;
int main(){
    cout<<"\nWelcome "<<name;
    cout<<"\nEnter the participant name 1 : ";
    string name1;
    cin>>name1;
    cout<<"\nEnter the participant name 2 : ";
    string name2;
    cin>>name2;
    int c1=0,c2=0;
    cout<<"\nParticipant 1 : "<<name1<<"\nparticipant 2 : "<<name2;
    cout<<"\nStart voting => press 1 to vote : "<<name1<<" Or Press 2 to vote "<<name2;
    cout<<"\n\nPress the key '3' when voting ends";
    for(int loop=1;;loop++){
        int vote;
        cout<<"\n\nPress 1 for "<<name1<<"\n\nPress 2 for "<<name2<<"  ";
        cin>>vote;
        if(vote==1)
        c1++;
        else if(vote==2)
        c2++;
        else if(vote==3)
        break;
    }
    if(c1>c2)
    cout<<" "<<name1<<" is the winner\tTotal votes = "<<c1;
    else if(c2>c1)
    cout<<" "<<name2<<" is the winner\ttotal votes = "<<c2;
    else if(c1==c2)
    cout<<" Both have received equal votes\ttotal votes "<<c1;
    else
    abort();
}