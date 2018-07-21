#include <iostream>// fungsi atau libarly untuk menjalankan program
#include <fstream>// fungsi fstream untuk menjalankan fungsi pengendali sistem deskop
#include <conio.h>//fungsi jeda pada return / getch
using namespace std;

int main()
{


ifstream infile("contoh input.txt");//fungsi pada stream untuk melakukan proses membaca file pada fstream

char x[30];//variable x dengan type data string fungsi huruf atau nama

infile>>x;//fungsi pada stream untuk membaca data di notepad ;
cout<<x<<endl;//outputan dari variable x / line 1;



//catatan
//jika membaca line secara vertikal bisa menggunakan variable saja a,b,c,d,x,y,z tetapi harus di buat ke dalam type data dan variable nya
//jika membaca secara horizontal harus di buat batasan atau pemisa  a,b,c tetapi harus di buat ke dalam type data dan vairblenya

//catatan penting fungsi f stream akan di baca sesuai format pada c++ yang anda buat	
return 0;
}
