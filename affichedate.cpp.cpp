#include <iostream>

 using namespace std;
 enum Jour{Lundi, Mardi, Mercredi, Jeudi,Vendredi,Samedi,Dimanche};

 enum Mois{Janvier, Fevrier, Mars, Avril, Mai, Juin, Juillet, Aout, Septembre, Octobre, Novembre, Decembre};

 //enum Mois31{Janvier, Mars = 3, Mai =5, Juillet =7, Aout=8, Octobre=10, Decembre=12};

 struct Date
 {
    Jour j;///jour de la semaine
    Mois m;///le mois
   int choice;
   int Choice1;


 };

 int main()
 {
    int nj;
    cout<<" \t Choisissez un jour de la semaine a l'aide des numeros \n1-Lundi \n2-Mardi \n3-Mercredi \n4-Jeudi \n5-Vendredi \n6-Samedi \n7-Dimanche" <<endl;
     cout<<"Faite votre choix: ";
    cin>> nj;
    int n;
    cout<<"Donner le numero du jour dans le mois: ";
    cin>> n;
    int nm;
    cout<<"Choisissez maintenant le mois a l'aide des numeros \n1-Janvier \n2-Fevrier \n3-Mars \n4-Avril \n5-Mai \n6-Juin \n7-Juillet \n8-Aout \n9-Septembre \n10-Octobre \n11-Novembre \n12-Decembre" <<endl;
    cin>> nm;
    int a;
    cout<<"Veuillez donner l'annee svp: ";
    cin>> a;
    cout<<" "<<endl;
    cout<<"La date choisie est le: " <<endl;
    if(nj==1) {cout<<"Lundi";};
    if(nj==2) {cout<<"Mardi";};
    if(nj==3) {cout<<"Mercredi";};
    if(nj==4) {cout<<"Jeudi";};
    if(nj==5) {cout<<"Vendredi";};
    if(nj==6) {cout<<"Samedi";};
    if(nj==7){ cout<<"Dimanche";};
    cout<<", "<<n;
    if(nm==1){cout<<"  Janvier";};
    if(nm==2){cout<<"  Frevier";};
    if(nm==3){cout<<" Mars";};
    if(nm==4){cout<<"  Avril";};
    if(nm==5){cout<<"  Mai";};
    if(nm==6){cout<<"  Juin";};
    if(nm==7){cout<<"  Juillet";};
    if(nm==8){cout<<"  Aout";};
    if(nm==9){cout<<"  Septembre";};
    if(nm==10){cout<<"  Octobre";};
    if(nm==11){cout<<"  Novembre";};
    if(nm==12){cout<<"  Decembre";};
    cout<<" "<<a ;
    cout<<" " <<endl;

    return 0;
 }
