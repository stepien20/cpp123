#include <iostream>
#include <fstream> //biblioteka do czytania plikow
#include <string>//stirng czy cos

using namespace std;//zeby nie pisac calyc zas std::cout np

int main(){
string filename="dane.txt";
ifstream odczyt(filename);//do odczytania zpliku i odrazu otwieramy plik
ofstream zapis("wynik.txt");
string num1;
string num2;
while(odczyt>>num1>>num2){//z odczytu bierzemy cala linie i wpierdalamy do dane i rozdielamy to spacja i bierzemy pierwsza czesc
string liczba;//inicjalizujemy wynik;
if(num1[0]>num2[0]){//jezeli pierwsza cyfra jest wieksza w num 1 to num1+num2 da nam wieksza liczbe niz num2+num1
liczba=num1+num2;//tworzymy liczbe z 2 stringow
}else{
liczba=num2+num1;//tworzymy liczbe z 2 stringow
}
zapis<<liczba<<endl;//zapisujemy do pliku liczbe i dajemy nowa linie zeby kada bylo w nowej linijce
}



zapis.close();//zamykamy plik
odczyt.close();//zamykamy plik
    return 0;
}
