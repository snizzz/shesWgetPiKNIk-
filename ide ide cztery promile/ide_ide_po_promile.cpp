#include <iostream>

using namespace std;

int main()
{
    float p,w,cz,alko;
    cout<<"UWAGA!!!!AMARENA AMARENA 4zl i CIE NIE MA"<<endl<<endl;
    cout<<"WAZNE!!!!Najwazniejszy posilek to nie sniadanie tylko ten ktory jesz przed chlaniem"<<endl<<endl;
    cout<<"plec(m/k):";
    char plec;
    cin>>plec;
    float waga;
    cout<<"ile wazysz?: ";
    cin>>waga;
    if(plec=='m')
    cout<<"Ile ojebales?"<<endl;
    if(plec=='k')
    cout<<"Ile ojebalas?"<<endl;
    cout<<"ml piwa?: ";
    cin >>p;
    cout<<"ml wina?: ";
    cin >>w;
    cout<<"ml wodki?: ";
    cin >>cz;
    float s=p/25+w/10+cz/3;
    if(plec=='m')
     alko=s/(0.7*waga);
    if(plec=='k')
     alko=s/(0.6*waga);
    cout<<"ilosc promili alkoholu we krwi :"<<alko<<endl;
    if(alko-0.2<=0)
            cout<<"Mozesz juz prowadzic"<<endl;
    if(plec=='m'&&alko-0.2>0){
            cout<<"Bedziesz mogl prowadzic samochod za "<<(alko-0.2)/0.15<<" h"<<endl;}
    if(plec=='k'&&alko-0.2>0){
            cout<<"Bedziesz mogl prowadzic samochod za "<<(alko-0.2)/0.1<<" h"<<endl;}


}




