#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
int main() {
	double n;
	string s;
	while (true) {

		cout << "*******PRZELICZNIK WAGI*******"<<endl;
		char wybor;
		cout << "  1.Wprowadz dane "<< endl;
		cout << "  2.Koniec programu" << endl;
		cout << "  Wybierz opcje:";
		cin >> wybor;
		if (wybor == '1') {}
		else if (wybor == '2') {
			system("cls");
			break;
		}
		else {
			cout << "NIE MA TAKIEJ OPCJI" << endl;
			continue;
		}

		cout << "  Podaj wartosc i jendostke [mg/g/dag/kg/t/gr/oz/lb/slug/ton(USA)/ton(UK)/kebabow: ";
		cin >> n;
		cin >> s;
		system("cls");
		cout << "*******PRZELICZNIK WAGI*******"<<endl;
		cout << "  "<< n << s << " to: " << endl;

		if(s=="mg") {

			cout << " " << n * 0.001 << "g" << endl;
			cout << " " << n * 0.0001 << "dag" << endl;
			cout << " " << n * 0.000001 << "kg" << endl;
			cout << " " << n * 0.0000000001 << "t" << endl;
			cout << " " << n * 0.015432 << "gr" << endl;
			cout << " " << n * 0.00003527 << "oz" << endl;
			cout << " " << n * 0.0000022046 << "lb" << endl;
			cout << " " << n * 0.000000068<< "slug" << endl;
			cout << " " << n * 0.0000000011 << "ton(USA)" << endl;
			cout << " " << n * 0.0000000011 << "ton(UK)" << endl;
			cout << " " << n * 0.450 << "kebabow" << endl;
		}
		else if(s=="g") {
			cout << " " << n * 1000 << "mg" << endl;
			cout << " " << n * 0.1 << "dag" << endl;
			cout << " " << n * 0.001 << "kg" << endl;
			cout << " " << n * 0.0000001 << "t" << endl;
			cout << " " << n * 15.432 << "gr" << endl;
			cout << " " << n * 0.03527 << "oz" << endl;
			cout << " " << n * 0.0022046 << "lb" << endl;
			cout << " " << n * 0.000068 << "slug" << endl;
			cout << " " << n * 0.0000011 << "ton(USA)" << endl;
			cout << " " << n * 0.0000011 << "ton(UK)" << endl;
			cout << " " << n / 450 << "kebabow" << endl;
		}
		else if(s=="dag") {
			cout << " " << n * 10000 << "mg" << endl;
			cout << " " << n * 10 << "g" << endl;
			cout << " " << n * 0.01 << "kg" << endl;
			cout << " " << n * 0.000001 << "t" << endl;
			cout << " " << n * 154.32 << "gr" << endl;
			cout << " " << n * 0.3527 << "oz" << endl;
			cout << " " << n * 0.022046 << "lb" << endl;
			cout << " " << n * 0.0006852176 << "slug" << endl;
			cout << " " << n * 0.00001102311310924388 << "ton(USA)" << endl;
			cout << " " << n * 0.00001102311310924388 << "ton(UK)" << endl;
			cout << " " << n / 45 << "kebabow" << endl;
		}
		else if(s=="kg") {
			cout << " " << n * 1000000 << "mg" << endl;
			cout << " " << n * 1000 << "g" << endl;
			cout << " " << n * 100 << "dag" << endl;
			cout << " " << n * 0.0001 << "t" << endl;
			cout << " " << n * 15432 << "gr" << endl;
			cout << " " << n * 35.27 << "oz" << endl;
			cout << " " << n * 2.2046 << "lb" << endl;
			cout << " " << n * 0.0685 << "slug" << endl;
			cout << " " << n * 0.0011 << "ton(USA)" << endl;
			cout << " " << n * 0.0011 << "ton(UK)" << endl;
			cout << " " << n / 0.45 << "kebabow" << endl;
		}
		else if(s=="t") {
			cout << " " << n * 1000000000 << "mg" << endl;
			cout << " " << n * 1000000 << "g" << endl;
			cout << " " << n * 100000 << "dag" << endl;
			cout << " " << n * 1000 << "kg" << endl;
			cout << " " << n * 15432000 << "gr" << endl;
			cout << " " << n * 35270 << "oz" << endl;
			cout << " " << n * 2204.6 << "lb" << endl;
			cout << " " << n * 68.52176 << "slug" << endl;
			cout << " " << n * 1.1023<< "ton(USA)" << endl;
			cout << " " << n * 1.1023 << "ton(UK)" << endl;
			cout << " " << n / 0.00045 << "kebabow" << endl;
		}
		else if(s=="gr") {
			cout << " " << n * 64.8 << "mg" << endl;
			cout << " " << n * 0.0648 << "g" << endl;
			cout << " " << n * 0.00648 << "dag" << endl;
			cout << " " << n * 0.0000648 << "kg" << endl;
			cout << " " << n * 0.0000000648 << "t" << endl;
			cout << " " << n * 0.0023 << "oz" << endl;
			cout << " " << n * 0.00014 << "lb" << endl;
			cout << " " << n * 0.0000044 << "slug" << endl;
			cout << " " << n * 0.0648 * 0.0000011 << "ton(USA)" << endl;
			cout << " " << n * 0.0648 * 0.0000011 << "ton(UK)" << endl;
			cout << " " << n * 0.0648/ 450 << "kebabow" << endl;
		}
		else if(s=="oz") {
			cout << " " << n * 28349.5 << "mg" << endl;
			cout << " " << n * 2834.95 << "g" << endl;
			cout << " " << n * 283.495 << "dag" << endl;
			cout << " " << n * 2.83495 << "kg" << endl;
			cout << " " << n * 0.00283495 << "t" << endl;
			cout << " " << n * 437.5 << "gr" << endl;
			cout << " " << n * 0.0625 << "lb" << endl;
			cout << " " << n * 0.0019 << "slug" << endl;
			cout << " " << n * 2834.95 * 0.0000011 << "ton(USA)" << endl;
			cout << " " << n * 2834.95 * 0.0000011 << "ton(UK)" << endl;
			cout << " " << n * 2834.95 /450 << "kebabow" << endl;
		}
		else if(s=="lb") {
			cout << " " << n * 1000 * 453.59 << "mg" << endl;
			cout << " " << n * 453.59 << "g" << endl;
			cout << " " << n * 0.1 * 453.59 << "dag" << endl;
			cout << " " << n * 0.001 * 453.59 << "kg" << endl;
			cout << " " << n * 0.0000001 * 453.59 << "t" << endl;
			cout << " " << n * 15.432 * 453.59 << "gr" << endl;
			cout << " " << n * 0.03527 * 453.59 << "oz" << endl;
			cout << " " << n * 0.00006852176 * 453.59 << "slug" << endl;
			cout << " " << n * 0.000001102311310924388 * 453.59 << "ton(USA)" << endl;
			cout << " " << n * 0.000001102311310924388 * 453.59 << "ton(UK)" << endl;
			cout << " " << n / 450 * 453.59 << "kebabow" << endl;
		}
		else if(s=="slug") {
			cout << " " << n * 1000 * 14593.9 << "mg" << endl;
			cout << " " << n * 14593.9 << "g" << endl;
			cout << " " << n * 0.1 * 14593.9 << "dag" << endl;
			cout << " " << n * 0.001 * 14593.9 << "kg" << endl;
			cout << " " << n * 0.0000001 * 14593.9 << "t" << endl;
			cout << " " << n * 15.432 * 14593.9 << "gr" << endl;
			cout << " " << n * 0.03527 * 14593.9 << "oz" << endl;
			cout << " " << n * 0.0022046 * 14593.9 << "lb" << endl;
			cout << " " << n * 0.000001102311310924388 * 14593.9 << "ton(USA)" << endl;
			cout << " " << n * 0.000001102311310924388 * 14593.9 << "ton(UK)" << endl;
            cout << " " << n / 450 * 14593.9 << "kebabow" << endl;
		}
		else if(s=="ton(USA)") {
			cout << " " << n * 1000 * 907184.74 << "mg" << endl;
			cout << " " << n * 907184.74 << "g" << endl;
			cout << " " << n * 0.1 * 907184.74 << "dag" << endl;
			cout << " " << n * 0.001 * 907184.74 << "kg" << endl;
			cout << " " << n * 0.0000001 * 907184.74 << "t" << endl;
			cout << " " << n * 15.432 * 907184.74 << "gr" << endl;
			cout << " " << n * 0.03527 * 907184.74 << "oz" << endl;
			cout << " " << n * 0.0022046 * 907184.74 << "lb" << endl;
			cout << " " << n * 0.00006852176 * 907184.74 << "slug" << endl;
			cout << " " << n * 0.000001102311310924388 * 907184.74 << "ton(UK)" << endl;
			cout << " " << n / 450 * 907184.74 << "kebabow" << endl;
		}
		else if(s=="ton(UK)") {
			cout << " " << n * 1000 * 1016046.9 << "mg" << endl;
			cout << " " << n * 1016046.9 << "g" << endl;
			cout << " " << n * 0.1 * 1016046.9 << "dag" << endl;
			cout << " " << n * 0.001 * 1016046.9 << "kg" << endl;
			cout << " " << n * 0.0000001 * 1016046.9 << "t" << endl;
			cout << " " << n * 15.432 * 1016046.9 << "gr" << endl;
			cout << " " << n * 0.03527 * 1016046.9 << "oz" << endl;
			cout << " " << n * 0.0022046 * 1016046.9 << "lb" << endl;
			cout << " " << n * 0.00006852176 * 1016046.9 << "slug" << endl;
			cout << " " << n * 0.000001102311310924388 * 1016046.9 << "ton(USA)" << endl;
			cout << " " << n / 450 * 1016046.9 << "kebabow" << endl;
		}
		else if(s=="kebabow") {
			cout << " " << n * 1000 * 450 << "mg" << endl;
			cout << " " << n * 450 << "g" << endl;
			cout << " " << n * 0.1 * 450 << "dag" << endl;
			cout << " " << n * 0.001 * 450 << "kg" << endl;
			cout << " " << n * 0.0000001 * 450 << "t" << endl;
			cout << " " << n * 15.432 * 450 << "gr" << endl;
			cout << " " << n * 0.03527 * 450 << "oz" << endl;
			cout << " " << n * 0.0022046 * 450 << "lb" << endl;
			cout << " " << n * 0.00006852176 * 450 << "slug" << endl;
			cout << " " << n * 0.000001102311310924388 * 450 << "ton(USA)" << endl;
			cout << " " << n * 0.000001102311310924388 * 450 << "ton(UK)" << endl;
		}
		else { cout << "  NIEPRAWID£OWA JEDNOSTKA" << endl<<endl;}
	}



	return 0;
}
