#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

class gra
	{
		public:
		vector<string> gracz;
		string napis;
		ifstream plik1;
    	ofstream plik2;
		gra();
        gra1();
		void wprowadz();
	};

gra::gra()
	{
    	plik1.open("c:\\plik.txt");
    	plik2.open("c:\\zapisz.txt");
	};

void gra::wprowadz()
	{
		int i=0;
        while(!plik1.eof())i++;
	};
class FPS:public gra
	{
		string opcja;				
		public:
		void wprowadz_FPS();
		void wypisz_FPS();
	};
void FPS::wprowadz_FPS()
	{
		wprowadz();
		plik1>>opcja;
	};
void FPS::wypisz_FPS()
	{
		plik2<<gracz[1]<<gracz[2]<<gracz[3]<<opcja;
	};
gra::gra1()
	{
    	plik1.close();
    	plik2.close();
	}
int main(int argc, char** argv) 
	{
		FPS p;
		p.wprowadz_FPS();
		p.wypisz_FPS();
		return 0;
	}
