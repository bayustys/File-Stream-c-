#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstdlib>
using namespace std;

struct mahasiswa
{
    char nama [30];
}; 

mahasiswa ueu; 
char t[15], t2[15], t3[15];

int garis()
{
    for(int i=0; i<70; i++)
    {
        cout<<"-";
    }
    cout<<endl;
}

int menu()
{
    cout<<"\t    ===DATA MAHASISWA==="<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Silahkan pilih kode yang Anda inginkan:"<<endl;
    cout<<"[1] Input Data"<<endl;
    cout<<"[2] Tambah Data"<<endl;
    cout<<"[3] Baca Data"<<endl;
    cout<<"[4] Gabung Data"<<endl;
    cout<<"[5] Keluar"<<endl;
    cout<<"Masukkkan kode yang Anda pilih [1/2/3/4/5]: ";
}

int input_data()
{
    cout<<"Masukkan nama file (.txt): ";
    cin.getline(t,15);
    ofstream simpan (t);
    system("cls");
    cout<<"\nNama\t    : ";
    cin.getline(ueu.nama,30);
    simpan<<ueu.nama<<endl;
    cout<<"\n\n\n"; system("PAUSE");
}

int tambah_data()
{
    cout<<"Masukkan nama file (.txt): ";
    cin.getline(t,15);
    ofstream simpan (t, ios::app);
    system("cls");
    cout<<"\nNama\t    : ";
    cin.getline(ueu.nama,30);
    simpan<<ueu.nama<<endl;
    cout<<"\n\n\n"; system("PAUSE");
}

int baca_data()
{
    cout<<"Masukkan nama file (.txt): ";
    cin>>t;
    ifstream buka (t);
    if(buka.good())
    {
        while(!buka.eof())
        {
            system("cls");
            while(buka)
            { 
                buka.getline(ueu.nama,30);    
                cout<<ueu.nama<<endl;
            }
        }
        cout<<"\n\n\n"; system("PAUSE");
    }
    else cout<<"file tidak ada"<<endl;
    getch();
}

int gabung_data()
{
    cout<<"Masukkan nama file ke-1 (.txt): ";
    cin.getline(t2,15);
    cout<<"Masukkan nama file ke-2 (.txt): ";    
    cin.getline(t3,15);
    ifstream buka1 (t2);
    ifstream buka2 (t3);
    
    ofstream gabung("gabung.txt");
    ofstream gabung2("gabung.txt", ios::app);
    
    while(buka1)
    {
        buka1.getline(ueu.nama,30);    
        gabung<<ueu.nama<<"\n";
        buka1.close();
        gabung.close(); 
    } 

    while(buka2)
    {
        buka2.getline(ueu.nama,30);    
        gabung2<<ueu.nama<<"\n";
        buka2.close();
        gabung2.close();
    }
} 

int main()
{
    char kode;

    data_aku:
    system("cls"); menu(); cin>>kode; cin.ignore(); system("cls");

       switch (kode)
       {
        	case '1': input_data(); goto data_aku;
           	case '2': tambah_data(); goto data_aku;
        	case '3': baca_data(); goto data_aku;
			case '4': gabung_data(); goto data_aku;
      	 	case '5': cout<<"\n\n\tBYE!!!"<<endl; break;
            default : cout<<"\n\n\tKODE SALAH!!!\n\n"<<endl; 
            system("PAUSE"); goto data_aku;
       }
       return 0;
}
