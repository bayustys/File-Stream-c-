#include <iostream> // fungsi atau libarly untuk menjalankan program
#include <conio.h> //fungsi jeda pada return / getch
#include <fstream> // fungsi fstream untuk menjalankan fungsi pengendali sistem deskop
using namespace std;

int main()
{
char x[30];//variable x dengan type data string/huruf dan nama	
cout<<"masukan nama barang = ";//output masukan nama barang
cin.getline(x,30);//inputan masukan pada variable x;


ofstream contohInput;// fungsi pada stream untuk memasukan data ke notepad atau fungsi commando lain dengan inisial daftra menu yang bisa di ubah
contohInput.open("contoh input.txt");//inisial alamat pada fstream mmelakukan proses open file dengan nama file "daftramenu.txt" yg bisa di rubah	   
contohInput<<x;//memasukan inputan dari variable x ke inisial fstream untuk di lakukan proses masukan
contohInput.close();//inisial alamat pada fstream melakkukan proses close file pada fstream;
return 0;
}
