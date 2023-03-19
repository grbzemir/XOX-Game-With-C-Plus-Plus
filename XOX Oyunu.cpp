#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

char bosluk[10] = {'k','1','2','3','4','5','6','7','8','9'}; // 1. index kullanilmayacak
int kontrol();
void tahta();


 int main()
 {

    int oyuncu =1;
    int i;
    int secim;

    char isaret;

    do
    {

        tahta();

        oyuncu = (oyuncu % 2) ? 1 : 2;

        cout<<"Oyuncu "<<oyuncu<<" secim yapiniz: ";
        cin>>secim;

        isaret = (oyuncu == 1) ? 'X' : 'O';

        if (secim== 1 && bosluk[1] == '1')
            bosluk[1] = isaret;

        else if (secim == 2 && bosluk[2] == '2')
            bosluk[2] = isaret;

        else if (secim == 3 && bosluk[3] == '3')
            bosluk[3] = isaret;

        else if (secim == 4 && bosluk[4] == '4')
            bosluk[4] = isaret;

        else if (secim == 5 && bosluk[5] == '5')
            bosluk[5] = isaret;

        else if (secim == 6 && bosluk[6] == '6')
            bosluk[6] = isaret;

        else if (secim == 7 && bosluk[7] == '7')
            bosluk[7] = isaret;

        else if (secim == 8 && bosluk[8] == '8')
            bosluk[8] = isaret;

        else if (secim == 9 && bosluk[9] == '9')
            bosluk[9] = isaret;

        else

        {

            cout<<"Hatali secim";

            oyuncu--;
            cin.ignore();
            cin.get();

        }
        
        i=kontrol();
        oyuncu++;
        
    } 

    while (i == -1);

    tahta();

    if (i==1)
    
        cout<<"Oyuncu"<<--oyuncu<<"kazandi";
        
    

    else
    {
    
        cout<<"Oyun berabere bitti";
        cin.ignore();
        cin.get();

        return 0;
        
    }

 }

    int kontrol()

    {

        if (bosluk[1] == bosluk[2] && bosluk[2] == bosluk[3])
            return 1;

        else if (bosluk[4] == bosluk[5] && bosluk[5] == bosluk[6])
            return 1;

        else if (bosluk[7] == bosluk[8] && bosluk[8] == bosluk[9])
            return 1;

        else if (bosluk[1] == bosluk[4] && bosluk[4] == bosluk[7])
            return 1;

        else if (bosluk[2] == bosluk[5] && bosluk[5] == bosluk[8])
            return 1;

        else if (bosluk[3] == bosluk[6] && bosluk[6] == bosluk[9])
            return 1;

        else if (bosluk[1] == bosluk[5] && bosluk[5] == bosluk[9])
            return 1;

        else if (bosluk[3] == bosluk[5] && bosluk[5] == bosluk[7])
            return 1;

        else if (bosluk[1] != '1' && bosluk[2] != '2' && bosluk[3] != '3' && bosluk[4] != '4' && bosluk[5] != '5' && bosluk[6] != '6' && bosluk[7] != '7' && bosluk[8] != '8' && bosluk[9] != '9')
            return 0;

        else

            return -1;

    }

    void tahta()

    {

        system("cls");
        cout<<"\n\n\tXOX Oyunu\n\n";

        cout<<"Oyuncu 1 (X) - Oyuncu 2 (O)"<<endl<<endl;

       
          cout << endl;

       cout << "     |     |     " << endl;
       cout << "  " << bosluk[1] << "  |  " << bosluk[2] << "  |  " << bosluk[3] << endl;
 
       cout << "_____|_____|_____" << endl;
       cout << "     |     |     " << endl;

       cout << "  " << bosluk[4] << "  |  " << bosluk[5] << "  |  " << bosluk[6] << endl;

       cout << "_____|_____|_____" << endl;
       cout << "     |     |     " << endl;

       cout << "  " << bosluk[7] << "  |  " << bosluk[8] << "  |  " << bosluk[9] << endl;

      cout << "     |     |     " << endl << endl;

      system("color 20");




}
 




