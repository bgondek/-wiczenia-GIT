#include <iostream>

using namespace std;


// tuatj możesz zrobić dowolną funkcję która zwraca floata i przyjmuje za argument floata
float funkcja_kwadratowa(float x){
    return x*x;
}


void tablicowanie(float dolna,float gorna,float krok,float * tab,float (*fp)(float)){
    //tablicowanie funkcji np x^2;
    float x = dolna;
    int i= 0;
    while(x<=gorna){
        tab[i]= (*fp)(x);//wywolanie funkcji przez wskaznik
        i++;
        x += krok;
    }
}

int main()
{
    float (*fp)(float);//fp wskazuje na jednoargumentowa funkcję ( o argumencie float) zwracajaca float;
    fp = funkcja_kwadratowa;//pod ten wskaźnik wrzucamy nasza funkcja_kwadratowa
    float dolna;
    cout << "Podaj granice dolna: ";
	cin >> dolna;
	float gorna;
	cout << "Podaj granice gorna: ";
	cin >> gorna;
	float krok;
	cout << "Podaj krok: ";
	cin >> krok;
	int size_of_table = (gorna - dolna)/krok;
	float tab[size_of_table];
	tablicowanie(dolna,gorna,krok,tab,fp);
	float x = dolna;
	for (int i = 0; i < size_of_table;i++){
	    x = dolna + i*krok;
	    cout << "x= " << x <<"y= " << tab[i] << endl;
	}


    return 0;
}
