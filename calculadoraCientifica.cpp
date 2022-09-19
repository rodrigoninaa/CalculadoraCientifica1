#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>  
#define LONGITUD_MAXIMA 100
#define BASE 16
using namespace std;
//-----------------------------------------------Calculadora---------------------------------------------------
class calculadora{
	static long double eu,pi;
	protected:
	static bool enge;
	static long double ans;
	public:
	calculadora(){
		enge=0;
		ans=0;
		eu=2.7182818285;
		pi=3.1415926536;
	}
	menu();
		void pntans(bool enge, long double ans){
			fflush(stdin);
			if(enge==1){//-
				if(ans<0){
					if(ans>=1.0 && ans<1000.0){
						cout<<ans*-1;
					}
					if(ans>=1000.0){
						if(ans>=1000.0 && ans<1000000.0){
							cout<<ans*-1.0/1000.0<<"K";
						}
						if(ans>=1000000.0 && ans<1000000000.0){
							cout<<ans*-1.0/1000000.0<<"M";
						}
						if(ans>=1000000000.0 && ans<1.0e12){
							cout<<ans*-1.0/1000000000.0<<"G";
						}
					}
					if(ans<1.0 && ans>0.0){
							if(ans<1.0 && ans>=0.001){
								cout<<ans*-1*1000<<"m";
							}
						if(ans<0.001 && ans>=0.000001){
							cout<<ans*-1*1000000.0<<char(230);
						}
						if(ans<0.000001 && ans>=0.000000001){
							cout<<ans*-1*1000000000.0<<"n";
						}
						if(ans<0.000000001 && ans>=1e-12){
							cout<<ans*-1.0*1.0e12<<"p";
						}
					}
				}else{//+
					if(ans>=1.0 && ans<1000.0){
						cout<<ans;
					}
					if(ans>=1000.0){
						if(ans>=1000.0 && ans<1.0e+006){
							cout<<ans/1000.0<<"K";
						}
						if(ans>=1000000.0 && ans<1000000000.0){
							cout<<ans/1000000.0<<"M";
						}
						if(ans>=1000000000.0 && ans<1.0e12){
							cout<<ans/1000000000.0<<"G";
						}
					}
					if(ans<1.0 && ans>0.0){
						if(ans<1.0 && ans>=0.001){
							cout<<ans*1000.0<<"m";
						}
						if(ans<0.001 && ans>=0.000001){
							cout<<ans*1000000.0<<char(230);
						}
						if(ans<0.000001 && ans>=0.000000001){
							cout<<ans*1000000000.0<<"n";
						}
						if(ans<0.000000001 && ans>=1.0e-12){
							cout<<ans*1.0e12<<"p";
						}
					}
				}
			}else{
				cout<<ans;
			}
		}
		double suma(){
			fflush(stdin);
			char opc;
			int n,i=0;
			double x;
			system("CLS");
			cout<<"\nCuantas sumas haras?\n";
			cin>>n;
			n++;
			if(n==0){
				ans=0;
			}else{
				if(n<0){
					system("CLS");
					cout<<"\n\nERROR!\n";
					system("PAUSE");
				}else{
					cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
					cin>>opc;
				if(opc=='a'||opc=='A'){
					for(i=0;i<n;i++){
						cout<<"Ingresa el numero "<<i+1<<" para sumar por "<<ans<<"\n";
						cout<<"ANS= ";
						pntans(enge,ans);
						cout<<" +";
						cin>>x;
						ans=ans+x;
					}
					cout<<"Resultado:\t";
					pntans(enge,ans);
					cout<<"\n";
					system("PAUSE");
				}else{
					ans=0;
					for(i=0;i<n;i++){
						cout<<"Ingresa el numero "<<i+1<<" para sumar.\n";
						cin>>x;
						ans=ans+x;
					}
					cout<<"Resultado:\t";
					pntans(enge,ans);
					cout<<"\n";
					system("PAUSE");
				}
				return ans;
				}
			}
		}
		double resta(){
			fflush(stdin);
			char opc;
			int n,i=0;
			double x;
			system("CLS");
			cout<<"\nCuantas restas haras?\n";
			cin>>n;
			n++;
			if(n==0){
				ans=0;
			}else{
				if(n<0){
					system("CLS");
					cout<<"\n\nERROR!\n";
					system("PAUSE");
			}else{
				cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
				cin>>opc;
			if(opc=='a'||opc=='A'){
				for(i=0;i<n;i++){
					cout<<"Ingresa el numero "<<i+1<<" para restar por "<<ans<<"\n";
					cout<<"ANS = "<<ans<<" -";
					cin>>x;
					if(i==0){
						ans=x;
					}else{
						ans=ans-x;
					}
				}
				cout<<"Resultado:\t";
				pntans(enge,ans);
				cout<<"\n";
				system("PAUSE");
			}else{
				ans=0;
				for(i=0;i<n;i++){
					cout<<"Ingresa el numero "<<i+1<<" para restar.\n";
					cin>>x;
					ans=ans-x;
				}
				cout<<"Resultado:\t";
				pntans(enge,ans);
				cout<<"\n";
				system("PAUSE");
			}
			return ans;
			}
			}
		}
		double mult(){
			fflush(stdin);
			char opc,mul=158;
			int n,i=0;
			double x;
			system("CLS");
			cout<<"\nCuantas multiplicaciones haras?\n";
			cin>>n;
			n++;
			if(n==0){
				ans=0;
			}else{
			if(n<0){
				system("CLS");
				cout<<"\n\nERROR!\n";
				system("PAUSE");
			}else{
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				for(i=0;i<n;i++){
					cout<<"Ingresa el numero "<<i+1<<" para multiplicar por "<<ans<<"\n";
					cout<<"ANS= "<<ans<<" "<<mul;
					cin>>x;
					ans=ans*x;
				}
				cout<<"Resultado:\t";
				pntans(enge,ans);
				cout<<"\n";
				system("PAUSE");
			}else{
				ans=1;
				for(i=0;i<n;i++){
					cout<<"Ingresa el numero "<<i+1<<" para multiplicar.\n";
					cin>>x;
					ans=ans*x;
				}
				cout<<"Resultado:\t";
				pntans(enge,ans);
				cout<<"\n";
				system("PAUSE");
			}
			return ans;
			}
			}
		}
		double div(){
			fflush(stdin);
			char opc,d=246;
			double x,y;
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
					cout<<"Ingresa el numero (Denominador/Divisor) para dividir a "<<ans<<"\n";
					cout<<"ANS= "<<ans<<" "<<d;
					cin>>x;
					if(x==0){
						cout<<"ERROR!\nNo se puede dividir entre 0\n";
						system("PAUSE");
					}else{
					ans=ans/x;
				cout<<"Resultado:\t";
				pntans(enge,ans);
				cout<<"\n";
				system("PAUSE");
				}
			}else{
				cout<<"Ingresa el primer(Numerador/Dividendo) numero para dividir.\n";
					cin>>x;
				cout<<"Ingresa el primer(Denominador/Divisor) numero para dividir.\n";
					cin>>y;
					if(y==0){
						cout<<"ERROR!\nNo se puede dividir entre 0\n";
					}else{
					ans=x/y;
				cout<<"Resultado:\t";
				pntans(enge,ans);
				cout<<"\n";
				}
				system("PAUSE");
			return ans;
			}
		}
		double fact(){
			fflush(stdin);
			double x,i;
			char opc;
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				if(ans<0){
				system("CLS");
				cout<<"\n\nERROR!\n";
				system("PAUSE");
				}else{
				x=ans;
				if(x!=0){
				ans=1;
				for(i=x;i>1;i--){
				ans=ans*i;
			}
			}else{
				ans=1;
			}
			cout<<x<<"! = ";
			pntans(enge,ans);
			cout<<"\n";
			system("PAUSE");
			}
			}else{
			int aux;
			aux=ans;
			ans=1;
			cout<<"Ingresa el numero para calcular Factorial\n";
			cin>>x;
				if(x<0){
				system("CLS");
				cout<<"\n\nERROR!\n";
				}else{
			if(x!=0){
			for(i=x;i>1;i--){
				ans=ans*i;
			}
			}else{
				ans=1;
			}
			cout<<x<<"! = ";
			pntans(enge,ans);
			cout<<"\n";
			}
			//ans=aux;
			system("PAUSE");
			}
			return ans;
		}
		double inv(){
			system("CLS");
			char a=94;
			if(ans==0){
				cout<<"ERROR!\nNo se puede dividir entre 0\n";
			}else{
			cout<<"\n";
			pntans(enge,ans);
			cout<<a<<"-1 o 1/";
			pntans(enge,ans);
			cout<<"\n";
			ans=1/ans;
			cout<<"Inversa:\t";
				pntans(enge,ans);
				cout<<"\n";
			}
			system("PAUSE");
			return ans;
		}
		double E10(){
			fflush(stdin);
			double x,y,i,aux;
			char opc,d,a=94,s1=158;
			system("CLS");
			cout<<"Presiona '+' Para n"<<s1<<"10"<<a<<"y o '-' n"<<s1<<"10"<<a<<"-y\n";
			cin>>d;
			if(d=='+'){
				cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				aux=ans;
				cout<<"Escribe el numero para elevar "<<ans<<s1<<"10"<<a;
				cin>>x;
				i=pow(10,x);
				ans=(ans*i);
				cout<<"Resultado de "<<aux<<s1<<"10"<<a<<x<<"es:\t";
				pntans(enge,ans);
				cout<<"\n";
			}else{
				cout<<"x"<<s1<<"10"<<a<<"y\nEscribe x\n";
				cin>>x;
				cout<<"Escribe y\n";
				cin>>y;
				i=pow(10,y);
				ans=(x*i);
				cout<<"Resultado de "<<x<<s1<<"10"<<a<<y<<" es:\t";
				pntans(enge,ans);
				cout<<"\n";
			}
			}else{
				cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				aux=ans;
				cout<<"Escribe el numero para elevar "<<ans<<s1<<"10"<<a;
				cin>>x;
				x=x*-1;
				i=pow(10,x);
				ans=(ans*i);
				cout<<"Resultado de "<<aux<<s1<<"10"<<a<<x<<"es:\t";
				pntans(enge,ans);
				cout<<"\n";
			}else{
				cout<<"x"<<s1<<"10"<<a<<"-y\nEscribe x\n";
				cin>>x;
				cout<<"Escribe y\n";
				cin>>y;
				y=y*-1;
				i=pow(10,y);
				ans=(x*i);
				cout<<"Resultado de "<<x<<s1<<"10"<<a<<y<<" es:\t";
				pntans(enge,ans);
				cout<<"\n";
			}
			}
			system("PAUSE");
			return ans;
		}
		double loga(){
			fflush(stdin);
			double x;
			int l;
			char opc,d,s1=94;
			system("CLS");
			cout<<"Que logaritmo desea calcular? Presiona 'L' para Log(X) o 'I' para ln\n";
			cin>>d;
			if(d=='l'||d=='L'){
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				if(ans<=0){
					cout<<"ERROR!\nLos logaritmos no pueden ser 0 o menores\n";
				}else{
					cout<<"Que base logaritmo desea calcular? Log(X)\n";
					cin>>l;
					int aux;
					aux=ans;
					ans=logl(ans);
					cout<<"El log"<<s1<<l<<"("<<aux<<") es:\t";
					pntans(enge,ans);
					cout<<"\n";
				}
			}else{
				cout<<"Escribe el numero del cual se calculara el logx(Y)\n";
				cin>>x;
				if(x<=0){
					cout<<"Los logaritmos no pueden ser 0 o menores\n";
				}else{
					cout<<"Que base logaritmo desea calcular? Log(X)\n";
					cin>>l;
					ans=logl(x);
					cout<<"El log"<<s1<<l<<"("<<x<<") es:\t";
					pntans(enge,ans);
					cout<<"\n";
				}
			}
			}else{
				cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				if(ans<=0){
					cout<<"Los logaritmos no pueden ser 0 o menores\n";
				}else{
					int aux;
					aux=ans;
					ans=log(ans);
					cout<<"El ln("<<aux<<") es:\t";
					pntans(enge,ans);
					cout<<"\n";
				}
			}else{
				cout<<"Escribe el numero del cual se calculara el ln\n";
				cin>>x;
				if(x<=0){
					cout<<"Los logaritmos no pueden ser 0 o menores\n";
				}else{
					int aux;
					aux=ans;
					ans=log(x);
					cout<<"El ln("<<x<<") es:\t";
					pntans(enge,ans);
					cout<<"\n";
				}
			}
			}
			system("PAUSE");
			return ans;
		}
		double sign(){
			double aux;
			fflush(stdin);
			system("CLS");
			aux=ans;
			ans=ans*(-1);
			cout<<"ANS = ";
			pntans(enge,aux);
			cout<<" ha cambiado a ANS = ";
			pntans(enge,ans);
			cout<<"\n";
			system("PAUSE");
			return ans;
		}
		double tsen(){
			double aux,x,y;
			char opc,error=241;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				aux=ans;
				ans=sin(ans);
				x=sin((aux*pi)/180);
				cout<<"El Seno de "<<aux<<" SEN("<<aux<<") en Radianes = "<<ans<<"\n";
				cout<<"El Seno de "<<aux<<" SEN("<<aux<<") en Grados = "<<x<<"\n";
			}else{
				cout<<"Escribe un numero para calcular la func SEN";
				cin>>y;
				ans=sin(y);
				x=sin((y*pi)/180);
				cout<<"El Seno de "<<y<<" SEN("<<y<<") en Radianes = "<<ans<<"\n";
				cout<<"El Seno de "<<y<<" SEN("<<y<<") en Grados = "<<x<<"\n";
			}
			system("PAUSE");
			return ans;
		}
		double tcos(){
			long double aux,x,y,rad;
			char opc,error=241;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				aux=ans;
				ans=cos(ans);
				x=cos((aux*pi)/180);
				cout<<"El Coseno de "<<aux<<" COS("<<aux<<") en Radianes = "<<ans<<"\n";
				cout<<"El Coseno de "<<aux<<" COS("<<aux<<") en Grados = "<<x<<"\n";
			}else{
				cout<<"Escribe un numero para calcular la func COS";
				cin>>y;
				ans=cos(y);
				rad=y*pi/180;
				cout<<"RAD="<<rad<<"\n";
				x=cos(rad);
				cout<<"El Coseno de "<<y<<" COS("<<y<<") en Radianes = "<<ans<<"\n";
				cout<<"El Coseno de "<<y<<" COS("<<y<<") en Grados = "<<x<<"\n";
			}
			system("PAUSE");
			return ans;
		}
		double ttan(){
			double aux,x,p,y,coseno;
			char opc,error=241;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				aux=ans;
				coseno=cos((ans*pi)/180);
				if(ans==90){
					cout<<"ERROR!\nEl Coseno de la funcion tangente TAN=(SEN/COS) COS no puede ser 0\n";
				}else{
				ans=tan(ans);
				x=tan((aux*pi)/180);
				cout<<"La Tangente de "<<aux<<" TAN("<<aux<<") en Radianes = "<<ans<<"\n";
				cout<<"La Tangente de "<<aux<<" TAN("<<aux<<") en Grados = "<<x<<"\n";
				}
			}else{
				cout<<"Escribe un numero para calcular la func TAN";
				cin>>y;
				if(y==90){
					cout<<"ERROR!\nEl Coseno de la funcion tangente TAN=(SEN/COS) COS no puede ser 0\n";
				}else{
				ans=tan(y);
				x=(tan((y*pi)/180));
				cout<<"La Tangente de "<<y<<" TAN("<<y<<") en Radianes = "<<ans<<"\n";
				cout<<"La Tangente de "<<y<<" TAN("<<y<<") en Grados = "<<x<<"\n";
				}
			}
			system("PAUSE");
			return ans;
			}
		double tcot(){
			double aux,x,y;
			char opc,error=241;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				aux=ans;
				ans=1/(tan(ans));
				x=1/(tan((aux*pi)/180));
				cout<<"La Cotangente de "<<aux<<" COT("<<aux<<") en Radianes = "<<ans<<"\n";
				cout<<"La Cotangente de "<<aux<<" COT("<<aux<<") en Grados = "<<x<<"\n";
			}else{
				cout<<"Escribe un numero para calcular la func COT";
				cin>>y;
				ans=1/(tan(y));
				x=1/(tan((y*pi)/180));
				cout<<"La Cotangente de "<<y<<" COT("<<y<<") en Radianes = "<<ans<<"\n";
				cout<<"La Cotangente de "<<y<<" COT("<<y<<") en Grados = "<<x<<"\n";
			}
			system("PAUSE");
			return ans;
			}
		double tsec(){
			long double aux,x,y,rad;
			char opc,error=241;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				aux=ans;
				ans=1/(cos(ans));
				x=1/(cos((aux*pi)/180));
				cout<<"La Secante de "<<aux<<" COS("<<aux<<") en Radianes = "<<ans<<"\n";
				cout<<"La Secante de "<<aux<<" COS("<<aux<<") en Grados = "<<x<<"\n";
			}else{
				cout<<"Escribe un numero para calcular la func SEC";
				cin>>y;
				ans=1/(cos(y));
				rad=y*pi/180;
				cout<<"RAD="<<rad<<"\n";
				x=cos(rad);
				cout<<"La Secante de "<<y<<" SEC("<<y<<") en Radianes = "<<ans<<"\n";
				cout<<"La Secante de "<<y<<" SEC("<<y<<") en Grados = "<<x<<"\n";
			}
			system("PAUSE");
			return ans;
			}
		double eng(){
			system("CLS");
			char opcion,por=158,elev=94;
			if(enge==1){
				cout<<"Eliga una opcion:\nPresiona m(mili)\tu(micro)\tn(nano)\tp(pico)\nB(Base)\tK(Kilo)\tM(Mega)\tG(Giga)\n";
				cin>>opcion;
				fflush(stdin);
				switch(opcion){
					case'm':
						cout<<"\nANS = "<<ans*1000<<"m\n";
					break;
					case'u':
						cout<<"\nANS = "<<ans*1000000<<"u\n";
					break;
					case'n':
						cout<<"\nANS = "<<ans*1000000000<<"n\n";
					break;
					case'p':
						cout<<"\nANS = "<<ans*1e12<<"p\n";
					break;
					case'K':
						cout<<"\nANS = "<<ans/1000<<"K\n";
					break;
					case'M':
						cout<<"\nANS = "<<ans/1000000<<"M\n";
					break;
					case'G':
						cout<<"\nANS = "<<ans/1000000000<<"G\n";
					break;
					default:
						cout<<"Opcion Invalida!\n";
					break;
				}
			}else{
				cout<<"Eliga una opcion:\nPresiona m("<<por<<"10"<<elev<<"-3)\tu("<<por<<"10"<<elev<<"-6)\tn("<<por<<"10"<<elev<<"-9)\tp("<<por<<"10"<<elev<<"-12)\n\tK("<<por<<"10"<<elev<<"3)\tM("<<por<<"10"<<elev<<"6)\tG("<<por<<"10"<<elev<<"9)\n";
				cin>>opcion;
				switch(opcion){
					case'm':
						cout<<"\nANS = "<<ans*1000<<por<<"10"<<elev<<"-3\n";
					break;
					case'u':
						cout<<"\nANS = "<<ans*1000000<<por<<"10"<<elev<<"-6\n";
					break;
					case'n':
						cout<<"\nANS = "<<ans*1000000000<<por<<"10"<<elev<<"-9\n";
					break;
					case'p':
						cout<<"\nANS = "<<ans*1e12<<por<<"10"<<elev<<"-12\n";
					break;
					case'K':
						cout<<"\nANS = "<<ans/1000<<por<<"10"<<elev<<"3\n";
					break;
					case'M':
						cout<<"\nANS = "<<ans/1000000<<por<<"10"<<elev<<"6\n";
					break;
					case'G':
						cout<<"\nANS = "<<ans/1000000000<<por<<"10"<<elev<<"9\n";
					break;
					default:
						cout<<"Opcion Invalida!\n";
					break;
				}
			}
			system("PAUSE");
			}
		double tcsc(){
			long double aux,x,y,rad;
			char opc,error=241;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				aux=ans;
				ans=1/(sin(ans));
				x=1/(sin((aux*pi)/180));
				cout<<"La Cosecante de "<<aux<<" CSC("<<aux<<") en Radianes = "<<ans<<"\n";
				cout<<"La Cosecante de "<<aux<<" CSC("<<aux<<") en Grados = "<<x<<"\n";
			}else{
				cout<<"Escribe un numero para calcular la func CSC";
				cin>>y;
				ans=1/(sin(y));
				rad=y*pi/180;
				cout<<"RAD="<<rad<<"\n";
				x=1/(sin(rad));
				cout<<"La Cosecante de "<<y<<" COS("<<y<<") en Radianes = "<<ans<<"\n";
				cout<<"La Coscante de "<<y<<" COS("<<y<<") en Grados = "<<x<<"\n";
			}
			system("PAUSE");
			return ans;
		}
		double euler(){
			char opc,a=94;
			double x;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				cout<<"El resultado de e"<<a<<ans<<" Es:\t";
				ans=pow(eu,ans);
				cout<<ans<<"\n";
			}else{
			cout<<"Escribe un numero para calcular e"<<a<<"x\n";
			cin>>x;
				cout<<"El resultado de e"<<a<<x<<" Es:\t";
				ans=pow(eu,x);
				cout<<ans<<"\n";
			}
			system("PAUSE");
		return ans;	
		}
		double raiz(){
			char opc,mm=241;
			double x,y;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				if(ans<0){
					cout<<"ERROR!\nNo existen raices reales negativas\n";
					x=ans;
					ans=ans*-1;
					ans=sqrt(ans);
					cout<<"El resultado de la raiz imaginaria de "<<x<<" es: ";
					pntans(enge,ans);
					cout<<"i \n";
				}else{
					x=ans;
					ans=sqrt(ans);
					cout<<"El resultado de la raiz de "<<x<<" es: "<<mm;
					pntans(enge,ans);
					cout<<"\n";
				}
			}else{
				cout<<"Escribe el numero para calcular su raiz cuadrada\n";
				cin>>y;
				if(y<0){
					cout<<"ERROR!\nNo existen raices reales negativas\n";
					x=y;
					ans=x*-1;
					ans=sqrt(ans);
					cout<<"El resultado de la raiz imaginaria de "<<x<<" es: ";
					pntans(enge,ans);
					cout<<"i \n";
				}else{
					x=y;
					ans=sqrt(y);
					cout<<"El resultado de la raiz de "<<x<<" es: "<<mm;
					pntans(enge,ans);
					cout<<"\n";
				}
			}
			system("PAUSE");
			return ans;
		}
		double potencia(){
			double x,y;
			char opc,exp=94;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				cout<<"Escribe un numero para elevar a "<<ans<<"\n";
				cin>>y;
				x=ans;
				ans=pow(ans,y);
				cout<<"el resultado de "<<x<<exp<<y<<" Es: "<<ans<<"\n";
			}else{
				cout<<"Escribe el coeficiente para elevar\n";
				cin>>x;
				cout<<"Escribe el numero para elevar a "<<x<<"\n";
				cin>>y;
				ans=pow(x,y);
				cout<<"el resultado de "<<x<<exp<<y<<" Es: "<<ans<<"\n";
			}
			system("PAUSE");
			return ans;
		}
		double mod(){
			int x,y;
			char opc;
			fflush(stdin);
			system("CLS");
			cout<<"Presiona A para usar la respuesta(ANS), cualquier otra tecla para no usarla.\n";
			cin>>opc;
			if(opc=='a'||opc=='A'){
				cout<<"Escribe el modulo que se quiere calcular\n";
				cin>>y;
				x=ans*1;
				ans=x%y;
				cout<<"El resultado de "<<x<<"(MODULO "<<y<<") ES: "<<ans<<"\n";
			}else{
				cout<<"Escribe el numero para calcular el modulo\n";
				cin>>x;
				cout<<"Escribe el modulo que se quiere calcular\n";
				cin>>y;
				ans=x%y;
				cout<<"El resultado de "<<x<<"(MODULO "<<y<<") ES: "<<ans<<"\n";
			}
			system("PAUSE");
			return ans;
		}
		void primos(){
			int x; bool opci;
			system("CLS");
			cout<<"0.-Para saber si un numero es primo\1.-Para obtener los numeros primos hasta cualquiera.\n";
			cin>>opci;
			if(opci==1){
			cout<<"Escribe el numero limite para obtener todos los primos hasta el.\n";
			cin>>x;
			if(x>10){
			cout<<"2 3 5 7 ";	
			}else{
			if(x<10 && x>7){
			cout<<"2 3 5 7 ";				
			}
			if(x<7 && x>5){
			cout<<"2 3 5 ";				
			}
			if(x<5 && x>3){
			cout<<"2 3";				
			}
			if(x<5 && x>2){
			cout<<"2 3";				
			}else{
				cout<<"2 ";
			}
			}
			for(int i=10;i<=x;i++){
				if(i%100==0){
					cout<<"\n";
				}
				for(int j=2;j<=9;j++){
					if(i%j==0){
						break;
					}else{
					if(j+1==10){
						cout<<i<<" ";
					}
					}
				}
			}
			}else{
				cout<<"Escribe el numero.\n";
				cin>>x;
				if(x<10){
					for(int i=2;i<=9;i++){
					if(x%2==0){
						cout<<x<<" No es primo!\n";
						break;
					}else{
						if(i+1==10){
							cout<<x<<" Es primo!\n";
						}
					}
				}
				}else{
				for(int i=2;i<=9;i++){
					if(x%2==0){
						cout<<x<<" No es primo!\n";
						break;
					}else{
						if(i+1==10){
							cout<<x<<" Es primo!\n";
						}
					}
				}
			}
			}
		cout<<"\n";
		system("PAUSE");
		}
		long double pin(){
			system("CLS");
			cout<<"\n\n\nEl valor de Pi es:\t"<<pi<<"\n";
			ans=pi;
			system("PAUSE");
			return ans;
		}
//-----------------------------------------------Opciones----------------------------------------------------------
	double choice(){
	char opc,color,ai=161;
	int chos,dec;
	while(opc!='Q'){
		system("CLS");
		cout<<"Presiona C para cambiar los colores del programa\nPresiona D para cambiar los Decimales del resultado(ANS)\nPresiona E para activar notacion de ingeniero\nPresiona I para informacion\nPresiona Q para salir\n";
		cin>>opc;
		switch(opc){
			system("CLS");
			case 'C':
			case 'c':
				system("CLS");
				cout<<"Presiona 1 para elegir fondo oscuro o cualquier otra tecla para fondos brillantes\n";
				fflush(stdin);
				cin>>chos;
				if(chos==1){
					while(chos!=0){
					fflush(stdin);
					system("CLS");
					cout<<"Presiona 0 para salir\n\n\t\t\tNegro\n\nColor 1\tColor 2\tColor 3\tColor 4\tColor 5\tColor 6\tColor 7\n\n\t\t\tAzul\n\nColor 8\tColor 9\tColor 10\tColor 11\tColor 12\tColor 13\n\n\t\t\tVerde\n\nColor 14\tColor 15\tColor 16\n\n\t\t\tAguaMarina\n\nColor 17\tColor 18\n\n\t\t\tRojo\n\nColor 19\tColor 20\tColor 21\tColor 22\n\n\t\t\tMorado\n\nColor 23\tColor 24\tColor 25\tColor 26\tColor 27\t\n\n\t\t\tAmarillo\n\nColor 28\tColor 29\tColor 30\n\n\t\t\tBlanco\n\nColor 31\tColor 32\n\n\t\t\tColor 33 (Vuelve al Original)\n";
					cin>>chos;
					switch(chos){
						case 1:
							system("COLOR 09");
							break;
						case 2:
							system("COLOR 0A");
							break;
						case 3:
							system("COLOR 0B");
							break;
						case 4:
							system("COLOR 0C");
							break;
						case 5:
							system("COLOR 0D");
							break;
						case 6:
							system("COLOR 0E");
							break;
						case 7:
							system("COLOR 0F");
							break;
						case 8:
							system("COLOR 18");
							break;
						case 9:
							system("COLOR 1A");
							break;
						case 10:
							system("COLOR 1C");
							break;
						case 11:
							system("COLOR 1D");
							break;
						case 12:
							system("COLOR 1E");
							break;
						case 13:
							system("COLOR 1f");
							break;
						case 14:
							system("COLOR 2B");
							break;
						case 15:
							system("COLOR 2E");
							break;
						case 16:
							system("COLOR 2F");
							break;
						case 17:
							system("COLOR 3E");
							break;
						case 18:
							system("COLOR 3F");
							break;
						case 19:
							system("COLOR 48");
							break;
						case 20:
							system("COLOR 4A");
							break;
						case 21:
							system("COLOR 4E");
							break;
						case 22:
							system("COLOR 4F");
							break;
						case 23:
							system("COLOR 58");
							break;
						case 24:
							system("COLOR 5A");
							break;
						case 25:
							system("COLOR 5B");
							break;
						case 26:
							system("COLOR 5E");
							break;
						case 27:
							system("COLOR 5F");
							break;
						case 28:
							system("COLOR 69");
							break;
						case 29:
							system("COLOR 6E");
							break;
						case 30:
							system("COLOR 6F");
							break;
						case 31:
							system("COLOR 79");
							break;
						case 32:
							system("COLOR 7C");
							break;
							cout<<"Opcion Invalida\n";
							break;
						case 33:
							system("COLOR 07");
							break;
							cout<<"Opcion Invalida\n";
							break;
						case 0:
							chos=0;
							break;
						}
					}
					}else{
						while(chos!=0){
						system("CLS");
						cout<<"Presiona 0 para salir\n\n\t\t\tGris\n\nColor 1\tColor 2\tColor 3\n\n\t\t\tAzul\n\nColor 4\n\n\t\t\tVerde\n\nColor 5\tColor 6\tColor 7\tColor 8\n\n\t\t\tAguaMarina\n\nColor 9\tColor 10\tColor 11\tColor 12\n\n\t\t\tRojo\n\nColor 13\tColor 14\tColor 15\n\n\t\t\tMorado\n\nColor 16\tColor 17\tColor 18\n\n\t\t\tAmarillo\n\nColor 19\tColor 20\tColor 21\tColor 22\n\n\t\t\tBlanco\n\nColor 23\tColor 24\tColor 25\tColor 26\tColor 27\tColor 28\tColor 29\tColor 30\n\n\t\t\tColor 31 (Vuelve al Original)\n";
					cin>>chos;
					switch(chos){
						case 1:
							system("COLOR 80");
							break;
						case 2:
							system("COLOR 81");
							break;
						case 3:
							system("COLOR 84");
							break;
						case 4:
							system("COLOR 97");
							break;
						case 5:
							system("COLOR A0");
							break;
						case 6:
							system("COLOR A1");
							break;
						case 7:
							system("COLOR A4");
							break;
						case 8:
							system("COLOR A5");
							break;
						case 9:
							system("COLOR B0");
							break;
						case 10:
							system("COLOR B1");
							break;
						case 11:
							system("COLOR B4");
							break;
						case 12:
							system("COLOR B5");
							break;
						case 13:
							system("COLOR C0");
							break;
						case 14:
							system("COLOR C1");
							break;
						case 15:
							system("COLOR C7");
							break;
						case 16:
							system("COLOR D0");
							break;
						case 17:
							system("COLOR D1");
							break;
						case 18:
							system("COLOR D4");
							break;
						case 19:
							system("COLOR E0");
							break;
						case 20:
							system("COLOR E1");
							break;
						case 21:
							system("COLOR E4");
							break;
						case 22:
							system("COLOR E5");
							break;
						case 23:
							system("COLOR F0");
							break;
						case 24:
							system("COLOR F1");
							break;
						case 25:
							system("COLOR F2");
							break;
						case 26:
							system("COLOR F3");
							break;
						case 27:
							system("COLOR F4");
							break;
						case 28:
							system("COLOR F5");
							break;
						case 29:
							system("COLOR F6");
							break;
						case 30:
							system("COLOR F8");
							break;
							cout<<"Opcion Invalida\n";
							break;
						case 31:
							system("COLOR 07");
							break;
							cout<<"Opcion Invalida\n";
							break;
						case 0:
							chos=0;
							break;
					}
					}
				}
				break;
			case 'D':
			case 'd':
				system("CLS");
				cout<<"Cuantos Decimales quiere ocupar?\nPresiona 11 para volver al default.\n";
				cin>>dec;
				if(dec<0 && dec>11){
					cout<<"ERROR!\n";
				}else{
				ans=0;
				 std::cout<<"\n\n"<<std::fixed<<std::setprecision(dec)<<ans<<"\n";
				system("PAUSE");
				}
				if(dec==11){
					//Default
					std::cout<<"\n\n"<<std::fixed<<std::setprecision(-1)<<ans<<"\n";
				}
				break;
			case 'E':
			case 'e':
				system("CLS");
				cout<<"\n\nPresiona 0 Para desactivar notacion de ingenier"<<ai<<"a\nPresiona 1 Para activar notacion ingeniero\n";
				cin>>chos;
				if(chos==1 || chos==0){
				if(chos==1){
				system("CLS");
				enge=1;
				cout<<"\n\nNotacion de ingenier"<<ai<<"a activada!\n";
				}else{
				system("CLS");
				enge=0;
				cout<<"\n\nNotacion de ingenier"<<ai<<"a desactivada!\n";	
				}
				}else{
				system("CLS");
				cout<<"\n\nOpcion Invalida!\n";
				}
				system("PAUSE");
				break;
			case 'I':
			case 'i':
				system("CLS");
				cout<<"\n---------------------------------------------------------\nEn unidades\nOhm -> Es la unidad de medida de las resistencias.\nResistencia -> Es la a la oposicion de la corriente en electromagnetismo.\nAmper -> Es la cantidad de energia ocupada en un circuito electrico.\nVoltaje -> Es la diferencia de potencial que existe en un circuito electrico.\nPotencia -> Es la cantidad de trabajo por unidad de tiempo.\n---------------------------------------------------------\n";
				cout<<"En prefijos\np -> pico ("<<char(158)<<"10^-12)\nn -> nano ("<<char(158)<<"10^-9)\nu -> micro ("<<char(158)<<"^-6)\nm -> mili ("<<char(158)<<"^-3)\nK -> Kilo ("<<char(158)<<"^3)\nM -> Mega ("<<char(158)<<"^6)\nG -> Giga ("<<char(158)<<"^9)\n---------------------------------------------------------\n";
				system("PAUSE");
				break;
			case 'Q':
			case 'q':
				opc='Q';
				break;
			default:
				system("CLS");
				cout<<"Opcion Invalida\n";
				system("PAUSE");
				break;
			}
		}
		return ans;
	}
		~calculadora(){}
};
//-----------------------------------------------Complejos-----------------------------------------------------
class numeros{
	int n,i;
	public:
		void inicio(){
			cout<<"Ingresa el numero real\n";
			cin>>n;
			cout<<"Ingresa el numero imaginario\n";
			cin>>i;
		}
	void ver(void);
	friend numeros suma(numeros n1,numeros n2);
	friend numeros resta(numeros n1,numeros n2);
	void complejos(void);
};
numeros suma(numeros r,numeros e){
	numeros rt;
	rt.n=r.n+e.n;
	rt.i=r.i+e.i;
return rt;
}
numeros resta(numeros r,numeros e){
	numeros rt;
	rt.n=r.n-e.n;
	rt.i=r.i-e.i;
return rt;
}
void numeros::ver(){
	if(i>=0){
	cout<<"Tu resultado es:\n"<<n<<" + "<<i<<"i\n";
	}else{
		cout<<"Tu resultado es:\n"<<n<<" "<<i<<"i\n";
	}
}

void numeros::complejos(){
	fflush(stdin);
	system("CLS");
	numeros r,r2,r3;
	char opc,senie=126;
	while(opc!='Q'){
		cout<<"Que quiere hacer?\nPresiona S para sumar.\nPresiona R para restar.\nPresiona Q para salir\n";
	cin>>opc;
		switch(opc){
		case 'S':
		case 's':
			system("CLS");
			r.inicio();
			r2.inicio();
			r3=suma(r,r2);
			r3.ver();
			system("PAUSE");
			break;	
		case 'R':
		case 'r':
			system("CLS");
			r.inicio();
			r2.inicio();
			r3=resta(r,r2);
			r3.ver();
			system("PAUSE");
			break;	
		case 'Q':
		case 'q':
			system("CLS");
			cout<<"Hasta pronto!\n"<<senie<<"Calculadora de complejos\n";
			opc='Q';
			break;
		default:
			system("CLS");
			cout<<"Opcion Invalida";
			system("PAUSE");
			break;
		}
	}
	system("PAUSE");
}
//-----------------------------------------------Fracciones----------------------------------------------------
class fracciones{
	int n,d;
	public:
		void inicio(){
			cout<<"Ingresa el numerador de la fraccion 1\n";
			cin>>n;
			cout<<"Ingresa el denominador de la fraccion 1\n";
			cin>>d;
		}
		void ver(void);
	friend fracciones suma(fracciones f1,fracciones f2);
	friend fracciones resta(fracciones f1,fracciones f2);
	friend fracciones multiplicacion(fracciones f1,fracciones f2);
	friend fracciones division(fracciones f1,fracciones f2);
	void fraccion();
};
fracciones suma(fracciones f1,fracciones f2){
	fracciones f3;
	int b=2;
	if(f1.d==f2.d){
		f3.n=f1.n+f2.n;
		f3.d=f1.d;
	}else{
		f3.n=((f1.n*f2.d)+(f2.n*f1.d));
		f3.d=(f1.d*f2.d);
while(b<=f3.n){
if(f3.d%b==0 && f3.n%b==0){
f3.d=f3.d/b;
f3.n=f3.n/b;
}else{
b++;
}
}
}
return f3;
}
fracciones resta(fracciones f1,fracciones f2){
	fracciones f3;
	int b=2;
	bool aux=1;
	if(f1.d==f2.d){
		f3.n=f1.n-f2.n;
		f3.d=f1.d;
	}else{
		f3.n=((f1.n*f2.d)-(f2.n*f1.d));
		f3.d=(f1.d*f2.d);
		if(f3.n<=0){
			f3.n=(-1*f3.n);
			aux=0;
		}
while(b<=f3.n){
if(f3.d%b==0 && f3.n%b==0){
f3.d=f3.d/b;
f3.n=f3.n/b;
}else{
b++;
}
}
if(aux==0){
		f3.n=(-1*f3.n);
	}else{aux=1;}
}
return f3;
}
fracciones multiplicacion(fracciones f1,fracciones f2){
	fracciones f3;
	int b=2;
	bool aux=1;
		f3.n=(f1.n*f2.n);
		f3.d=(f1.d*f2.d);
		if(f3.n<=0){
			f3.n=(-1*f3.n);
			aux=0;
		}
while(b<=f3.n){
if(f3.d%b==0 && f3.n%b==0){
f3.d=f3.d/b;
f3.n=f3.n/b;
}else{
b++;
}
}
if(aux==0){
		f3.n=(-1*f3.n);
	}else{aux=1;}
	return f3;
}
fracciones division(fracciones f1,fracciones f2){
fracciones f3;
	int b=2;
	bool aux=1;
		f3.n=(f1.n*f2.d);
		f3.d=(f1.d*f2.n);
		if(f3.n<=0){
			f3.n=(-1*f3.n);
			aux=0;
		}
while(b<=f3.n){
if(f3.d%b==0 && f3.n%b==0){
f3.d=f3.d/b;
f3.n=f3.n/b;
}else{
b++;
}
}
if(aux==0){
		f3.n=(-1*f3.n);
	}else{aux=1;}
	return f3;
}
void fracciones::ver(){
	if(n==0 && d!=0){
		cout<<"Resultado:\t 0\n";
	}else{
	if(d==0){
		cout<<"ERROR!\nNo se puede dividir entre 0\n";
	}else{
	cout<<"Resultado:\t"<<n<<"/"<<d<<"\n";
	}
	}
}
void fracciones::fraccion(){
	fracciones r,r2,r3;
	char opc,senie=126;
	while(opc!='Q'){
	system("CLS");
	cout<<"Que quiere hacer?\nPresiona S para sumar.\nPresiona R para restar.\nPresiona M para multiplicar.\nPresiona D para dividir.\nPresiona Q para salir\n";
	cin>>opc;
		switch(opc){
		case 'S':
		case 's':
			system("CLS");
			r.inicio();
			r2.inicio();
			r3=suma(r,r2);
			r3.ver();
			system("PAUSE");
			break;	
		case 'R':
		case 'r':
			system("CLS");
			r.inicio();
			r2.inicio();
			r3=resta(r,r2);
			r3.ver();
			system("PAUSE");
			break;	
		case 'M':
		case 'm':
			system("CLS");
			r.inicio();
			r2.inicio();
			r3=multiplicacion(r,r2);
			r3.ver();
			system("PAUSE");
			break;	
		case 'D':
		case 'd':
			system("CLS");
			r.inicio();
			r2.inicio();
			r3=division(r,r2);
			r3.ver();
			system("PAUSE");
			break;
		case 'Q':
		case 'q':
			system("CLS");
			cout<<"Hasta pronto!\n"<<senie<<"Calculadora de fracciones\n";
			opc='Q';
			break;
		default:
			system("CLS");
			cout<<"Opcion Invalida";
			system("PAUSE");
			break;
	}
	}
	system("PAUSE");
}
//-----------------------------------------------Tiempo--------------------------------------------------------
class horas{
	int hrs,min;
public:
	void ver(void);
	horas ();
	horas (int h,int m);
	horas (const horas &ti);
	friend horas suma(horas t1,horas t2);
	void hors();
	~horas(){
	}
};
void horas::ver(){
	if(min>9){
	cout<<"\n"<<hrs<<":"<<min;
	}else{
		cout<<"\n"<<hrs<<":0"<<min;
	}
}
horas::horas(){
	hrs=0;
	min=0;
}
horas::horas(const horas &T1){
	hrs=T1.hrs;
	min=T1.min;
}
horas::horas(int ahrs,int amin){
	hrs=ahrs;
	min=amin;
}
horas suma(horas t1,horas t2){
	horas t3;
	int aux=t1.min+t2.min;
	if(aux>=60){
		t3.min=(t1.min+t2.min-60);
		t3.hrs=(t1.hrs+t2.hrs+1);
	}else{
		t3.min=t1.min+t2.min;
		t3.hrs=t1.hrs+t2.hrs;
	}
	if(t3.hrs>=24){
		t3.min=t1.min+t2.min;
		t3.hrs=(t1.hrs+t2.hrs-24);
	}
	return t3;
}

void horas::hors(){
	fflush(stdin);
	system("CLS");
int ahrs,amin;
	horas obj;
	cout<<"Ingresa las horas\n";
	cin>>ahrs;
	if(ahrs>24){
	cout<<"El dia solo tiene 24 horas!\n";
	}
	cout<<"Ingresa los minutos\n";
	cin>>amin;
	if(amin>60){
	cout<<"Los minutos en una hora solo son 60!\n";
	}
	horas obj1(ahrs,amin);
		cout<<"Ingresa las horas\n";
	cin>>ahrs;
	if(ahrs>24){
	cout<<"El dia solo tiene 24 horas!\n";
	}
	cout<<"Ingresa los minutos\n";
	cin>>amin;
	if(amin>60){
	cout<<"Los minutos en una hora solo son 60!\n";
	}
	horas obj2(ahrs,amin);
	horas obj3=suma(obj1,obj2);
	obj1.ver();
	obj2.ver();
	obj3.ver();
	cout<<"\n";
	system("PAUSE");
}
//-----------------------------------------------VectorDet-----------------------------------------------------
class Vectores:private calculadora{
	private:
		int x,y,p;
	public:
		void ingresar();
		long double imprimir();
	friend Vectores operator /(Vectores &V1,Vectores &V2){ //AMIGOS (FRIEND) SIEMPRE VA CON &
		Vectores V;
		float M1,M2;
		M1=V1.x*V2.y;
		M2=V1.y*V2.x;
		V.p=M1-(M2);
	return V;
	}
};
void det(void);
void Vectores::ingresar(){
	cout<<"Ingresa i\n";
	cin>>x;
	cout<<"Ingresa j\n";
	cin>>y;
	p=0;
}
long double Vectores::imprimir(){
	cout<<p<<"\n";
	ans=p;
	return ans;
}
void det(){
	fflush(stdin);
	system("CLS");
	Vectores V1,V2,V3,V4;
	V1.ingresar();
	V2.ingresar();
	V3=V1/V2;
	cout<<"\n";
	cout<<"Resultado: \n";
	V3.imprimir();
	cout<<"\n";
	system("PAUSE");
}
//----------------------------CALCULADORAS-ESPECIFICAS---------------------------------------------------------
//------------------------------------Decimal-BinarioS-HEXADECINMAL---------------------------------------------------------------
//Hexadecimal
unsigned long long HexadecimalADecimal(char *cadenaHexadecimal, int longitud);
int caracterHexadecimalADecimal(char caracter);
void bin(unsigned long long n){
	fflush(stdin);
if(n>1){
bin(n/2);
}
cout<<n%2;
}	
void hexa(){
	unsigned long long int n;
	system("CLS");
char Hexadecimal[LONGITUD_MAXIMA];
fflush(stdin);
  cout<<"Escribe un numero Hexadecimal\n";
  fgets(Hexadecimal, LONGITUD_MAXIMA, stdin);
  Hexadecimal[strcspn(Hexadecimal, "\r\n")] = 0;

  unsigned long long Decimal =
      HexadecimalADecimal(Hexadecimal, strlen(Hexadecimal));
  cout<<"El numero Hexadecimal "<<Hexadecimal<<" es "<<Decimal<<" en Decimal\n";
  n=Decimal;
  cout<<"El numero Hexadecimal "<<Hexadecimal<<" es ";
  bin(n);
  cout<<" en Binario\n";
}
int caracterHexadecimalADecimal(char caracter) {
  if (isdigit(caracter))
    return caracter - '0';
  return 10 + (toupper(caracter) - 'A');
}
 
unsigned long long HexadecimalADecimal(char *cadenaHexadecimal, int longitud) {
  unsigned long long Decimal = 0;
  int potencia = 0;
  for (int i = longitud - 1; i >= 0; i--) {
    int valorActual = caracterHexadecimalADecimal(cadenaHexadecimal[i]);
    unsigned long long elevado = pow(BASE, potencia) * valorActual;
    Decimal += elevado;
    potencia++;
  }
  return Decimal;
}
//Binarios
void hexad(int Decimal, int aux){
unsigned long long aux2=Decimal;
	char hexa[8];
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int i=0;
	while(Decimal>=16){
		hexa[i]=hex[Decimal%16];
		Decimal=Decimal/16;
		i++;
	}
	hexa[i]=hex[Decimal];
	cout<<"El numero Binario "<<aux<<" es ";
	int j=0;
	for(j=i;j>=0;j--){
		cout<<hexa[j];
	}
	cout<<" en Hexadecimal\n";
}
void Binarios(){
	unsigned long int x,digito,pos=0,r=0,aux;
	int v[]={1,2,4,8,16,32,64,128,256,512,1024};
	char he[LONGITUD_MAXIMA];
	system("CLS");
	cout<<"Escribe un numero Binario\n";
	cin>>x;
	aux=x;
	cout<<"\n";
	while(x>0){
		digito=x%10;
		if(digito==1){
			r=r+v[pos];
		}
			pos++;
			x=x/10;
	}
	cout<<"El numero Binario "<<aux<<" es "<<r<<" en Decimal\n";
	hexad(r,aux);
	system("PAUSE");
}
//Decimal
deciahexa(unsigned long long Decimal){
	unsigned long long aux2=Decimal;
	char hexa[8];
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int i=0;
	while(Decimal>=16){
		hexa[i]=hex[Decimal%16];
		Decimal=Decimal/16;
		i++;
	}
	hexa[i]=hex[Decimal];
	cout<<"El numero Decimal "<<aux2<<" es ";
	int j=0;
	for(j=i;j>=0;j--){
		cout<<hexa[j];
	}
	cout<<" en Hexadecimal\n";
}
void binar(unsigned long long n){
if(n>1){
binar(n/2);
}
cout<<n%2;
}
void Decimal(){
	system("CLS");
	unsigned long long int n;
	char opc;
	while(opc!='Q'){
		system("CLS");
	cout<<"Presiona D para convertir de Decimal a Hexadecimal y Binario\nPresiona B para convertir de Binario a Decimal y Hexadecimal\nPresiona H para convertir de Hexadecimal a Decimal y Binario\nPresiona Q para salir\n";
	cin>>opc;
	system("CLS");
	switch(opc){
	case 'D':
	case 'd':
do{
cout<<"Escribe un numero Decimal\n";
	cin>>n;
	deciahexa(n);
}while(n<0);
cout<<"El numero Decimal "<<n<<" es ";
binar(n);
cout<<" en Binario\n";
system("PAUSE");
break;
	case 'B':
	case 'b':
		Binarios();
		break;
	default:
			system("CLS");
			cout<<"Opcion Invalida\n";
			system("PAUSE");
			break;
	case 'H':
	case 'h':
			system("CLS");
			hexa();
			system("PAUSE");
			break;
	case 'Q':
	case 'q':
			opc='Q';
			break;	
	}
	}
}
//------------------------------------Formula-General-------------------------------------------------
	void gen(){
			system("CLS");
			char symb=94,sol=157,mm=241,e=156,ex=253,mult=158,div=246;
			float a,b,c,x1,x2,aux;
			cout<<"\nFormula:\tx = (-b"<<mm<<"raiz[b"<<ex<<"-4ac])"<<div<<"(2a)\n";
			cout<<"\t\tx"<<ex<<mm<<"x"<<mm<<"n"<<"\n";
			cout<<"Escribe el valor de a (x"<<ex<<")\n";
			cin>>a;
			cout<<"Escribe el valor de b (x)\n";
			cin>>b;
			cout<<"Escribe el valor de c (n)\n";
			cin>>c;
			cout<<"\nFormula:\tx = (-("<<b<<")"<<mm<<"raiz("<<b<<ex<<"-[4"<<mult<<a<<mult<<c<<"]))"<<div<<"(2"<<mult<<a<<")\n\n";
			aux=(b*b)+(-4*a*c);
			if(aux<0){
				cout<<"\n";
				cout<<"La ecuacion no tiene solucion\tx"<<e<<sol;
			}else{
			x1=(-1*b+(sqrt(aux)))/(2*a);
			x2=(-1*b-(sqrt(aux)))/(2*a);
			cout<<"La Solucion de x1 es: "<<x1<<"\n";
			cout<<"La Solucion de x2 es: "<<x2<<"\n";
			}
			cout<<"\n";
			system("PAUSE");
		}
//----------------------------------------------JuegoSnake-----------------------------------------------------
#define ARRIBA 72
#define IZQUIERDA 75
#define ABAJO 80
#define DERECHA 77
#define ESC 27

char tecla;
int cuerpo[200][2];
int n=1;
int tam = 3;
int x=10, y=12;
int dir=3;
int xc=30, yc=20;
int Puntos=0;
int xxc= 40, yyc=18;
int d;
int dif;
double tiempo;

void dificultad(){
	cout<<"\nSnake\nElije una dificultad para alterar la velocidad\n1:Facil\n2:Media\n3:Dificil\n";
	cin>>d;
	switch(d){
		case 1:
			dif=80;
			break;
		case 2:
		    dif=60;
			break;
		case 3:
		    dif=35;
			break;		
	}
	system("CLS");
}

void gotoxy(int x,int y){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	
	SetConsoleCursorPosition(hCon,dwPos);
}

void pintar(){
	for(int i=2; i<78;i++){
		gotoxy(i,3);cout<<(char)205;
		gotoxy(i,23);cout<<(char)205;	
	}
	for(int i=4;i<23;i++){
		gotoxy(2,i); cout<<(char)186;
		gotoxy(77,i); cout<<(char)186;
	}
	gotoxy(2,3);cout<<(char)201;
	gotoxy(2,23);cout<<(char)200;
	gotoxy(77,3);cout<<(char)187;
	gotoxy(77,23);cout<<(char)188;
	
}

void dibujarcuerpo(){
	for(int i=1; i<tam;i++){
		gotoxy(cuerpo[i][0],cuerpo[i][1]); cout<<"*";
	}
}

void guardarposicion(){
	cuerpo[n][0]=x;
	cuerpo[n][1]=y;
	n++;
	if (n==tam){n=1;}
	dibujarcuerpo();
}


void borrarcuerpo(){
		gotoxy(cuerpo[n][0],cuerpo[n][1]); cout<<" ";
		guardarposicion();
	}

void Teclear(){
	if (kbhit()){
		tecla=getch();
		switch(tecla){
			case ARRIBA:
			if (dir !=2){dir=1;}
			break;
			case ABAJO:
			if(dir != 1 ){dir=2;}
			break;
			case IZQUIERDA:
			if (dir != 3){dir=4;}
			break;
			case DERECHA:
			if (dir != 4){dir=3;}
			break;	
		}
	}

}

void comida(){
	if (x==xc && y==yc) {
		srand((unsigned)time(NULL));
		xc=(rand()% 73)+4;
		srand((unsigned)time(NULL));
		yc=(rand()% 19)+4;
		tam++;
		gotoxy(xc,yc); cout<<(char)254;
		Puntos++;
		gotoxy(50,2);cout<<"\tPUNTOS: "<<Puntos;
	}
	
}

bool gameover(){
	if (y==3 || y== 23 || x==2 || x==77){return 0; }
	for (int j=tam-1; j>0;j--){
		if(cuerpo[j][0]==x && cuerpo [j][1]==y) {return 0; }
	}
	return 1;
}

void puntosx(){
	tiempo=tiempo+0.05;
	int tiempo2=tiempo;
	gotoxy(35,2);cout<<"TIEMPO: "<<tiempo;
	if (x==xxc && y== yyc){
		srand((unsigned)time(NULL));
		xxc=(rand()%73)+4;
		srand((unsigned)time(NULL));
		yyc=(rand()%19)+4;
		Puntos=Puntos+5;
        gotoxy(50,2);
		cout<<Puntos;
	}
	if (tiempo2 %10==0){
	    gotoxy(xxc,yyc); cout<<(char)244;	
	} else if (tiempo2 %15==0){
		gotoxy(xxc,yyc); cout<<" ";
		srand((unsigned)time(NULL));
		xxc=(rand()%73)+4;
		srand((unsigned)time(NULL));
		yyc=(rand()%19)+4;
	}
} 

void proceso(){
	borrarcuerpo();
	comida();
	puntosx();
	Teclear();
	Teclear();
	if (dir==1){y--;}
	if (dir==2){y++;}
	if (dir==3){x++;}
	if (dir==4){x--;}
	Sleep(dif);
}
void snake(){
	system("CLS");
dificultad();	
gotoxy(50,2);cout<<Puntos;
pintar();
gotoxy(xc,yc);cout<<(char)4;	
while(tecla != ESC && gameover() ){
    proceso();
}
if (gameover()==0){
	MessageBox(NULL,"Has perdido","Perdió", MB_OK);
	system("CLS");
}
	system("PAUSE");
}
//-----------------------------------------------Fraccion-a-Decimal-------------------------------------------------
converfrac(){
	float n,aux=1, num=1,den=1;
	int a,c,b=2;
	system("CLS");
	cout<<"Escribe un numero Decimal\n";
	cin>>n;
	while(!(aux==n)){
		aux=num/den;
		if(aux<n){
			num++;
		}else{
			if(aux>n){
				num--;
				den++;
			}
		}
	}
	a=num;
	c=den;
	while(b<=a){
if(c%b==0 && a%b==0){
den=den/b;
num=num/b;
}else{
b++;
}
}
cout<<"Resultado:\n";
cout<<num<<"/"<<den<<"\n";
system("PAUSE");
}
//-----------------------------------------------Constantes----------------------------------------------------
long double calculadora::ans;
long double calculadora::eu;
long double calculadora::pi;
bool calculadora::enge;
//Agregar Herencia y retornar valor obtenido en ANS
//------------------------------------------------Menu2---------------------------------------------------------
class calcesp:private calculadora{
	public:
formulas(){
	numeros c;
	fracciones f;
	horas t;
	char opc,a=253,s1=158,senie=126,aee=130,ae=144,aa=160,ai=161,ao=162;
	int op;
	while(opc!='Q'){
	system("CLS");// C,F,T,V,G,R,K,S,B,D,Q
	//CHECAR FUNC TRIGONOMETRICAS
	//Formula General-Calculadora de resistencias/Capacitores-Formulas, Operaciones booleanas.
	/*Agregar más:
	\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tQu"<<aee<<" desea hacer?\n
	*/
	cout<<"\n\n\n\n\n\t\t\t\tÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎ\n";
	cout<<"\n\t\t\t\t\t\t\t\tINSTITUTO POLIT"<<ae<<"CNICO NACIONAL\n\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n\t\t\t\t\t\t\t\t\tESIME Culhuac"<<aa<<"n\n\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n\t\t\t\t\t\t\t\t   Ingenier"<<ai<<"a En Computaci"<<ao<<"n\n\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n";
	cout<<"\n\t\t\t\t\t\t\t\t  Formulas Especif"<<ai<<"cas\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tQu"<<aee<<" desea hacer?\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona I para hacer suma o resta de numeros complejos\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona F para hacer operaciones con fracciones\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona P Para transformar de Decimal a Fraccion.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona T para hacer suma de horas\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona V para sacar determinante de un vector en R"<<a<<"\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona G Para calcular una ecuacion cuadratica\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona O Para calcular Ley De Ohm\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona Z Para calcular Voltaje RMS/Pico A Pico\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona C para calcular Capacitores Serie/Paralelo\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona R para calcular resistencias Serie/Paralelo\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona K Para calcular codigo de colores y valores de resistencias\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona S para jugar el juego de Snake(Serpiente)\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona B para hacer Algebra Booleana\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona D Para convertir Decimal, Binario o Hexadecimal\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona A para mostrar respuesta (ANS)\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona Q Para salir.\n\t\t\t\t_______________________________________________________________________________________________\n";
	cin>>opc;
	switch(opc){
		case 'A':
		case 'a':
			fflush(stdin);
			system("CLS");
			cout<<"\n"<<"ANS = ";
			pntans(enge,ans);
			cout<<"\n";
			system("PAUSE");
		break;
		case 'I':
		case 'i':
			c.complejos();
			break;
		case 'B':
		case 'b':
			boole();
			break;
		case 'D':
		case 'd':
			Decimal();
			break;
		case 'F':
		case 'f':
			f.fraccion();
			break;
		case 'P':
		case 'p':
			converfrac();
		break;
		case 'Z':
		case 'z':
			vrmspp();
		break;
		case 'O':
		case 'o':
			leyohm();
		break;
		case 'T':
		case 't':
			t.hors();
			break;
		case 'V':
		case 'v':
			det();
			break;
		case 'G':
		case 'g':
			gen();
			break;
		case 'R':
		case 'r':
			resistencias();
			break;
		case 'K':
		case 'k':
			codigoresistencias();
			break;
		case 'C':
		case 'c':
			capacitores();
			break;
		case 'S':
		case 's':
			snake();
			cout<<"Reinicia el programa para volver a jugar\n";
			system("PAUSE");
			break;
		case 'Q':
		case 'q':
			system("CLS");
			cout<<"Hasta pronto!\n"<<senie<<"Calculadora\n";
			opc='Q';
			system("PAUSE");
			break;
		default:
			system("CLS");
			cout<<"Opcion Invalida\n";
			system("PAUSE");
			break;
	}
}
}
//-----------------------------------------------Ley-De-OHM-------------------------------------------------
long double leyohm(){
			system("CLS");
			char opc;
			long double e,i,r;
			cout<<"Que desea calcuar?\nPresiona E para Voltaje\nPresiona I para Corriente\nPresiona R para Resistencia\nPresiona P para potencia\n";
			cin>>opc;
			fflush(stdin);
			if(opc!=73 || opc!=105){
				system("CLS");
				switch(opc){
					case 'E':
					case 'e':
						cout<<"Escriba el valor de la corriente (En Ampers)\n";
						cin>>i;
						cout<<"Escriba el valor de la resistencia\n";
						cin>>r;
						ans=i*r;
						cout<<"El voltaje es ";
						pntans(1,ans);
						cout<<" con una potencia de ";
						pntans(1,ans*i);
					break;
					case 'I':
					case 'i':
						cout<<"Escriba el valor del voltaje\n";
						cin>>e;
						cout<<"Escriba el valor de la resistencia\n";
						cin>>r;
						ans=e/r;
						cout<<"La corriente es ";
						pntans(1,ans);
						cout<<"A\nCon una potencia de ";
						pntans(1,ans*e);
						cout<<"W\n";
						break;
					case 'R':
					case 'r':
						cout<<"Escriba el valor de la corriente (En Ampers)\n";
						cin>>i;
						cout<<"Escriba el valor del voltaje\n";
						cin>>e;
						ans=e/i;
						cout<<"El valor de la resistencia es de ";
						pntans(1,ans);
						cout<<"Ohms\nCon una potencia de ";
						pntans(1,ans*i*i);
						cout<<"W\n";
					break;
					case 'P':
					case 'p':
					break;
					default:
						cout<<"Opcion Invalida\n";
					break;
				}
				}
				if(opc=='P' || opc=='p'){
					system("CLS");
					cout<<"Potencia\nPresiona 1 para los datos de Voltaje y Resistencia\nPresiona 2 Para los datos de Voltaje y Corriente\nPresiona 3 Para los datos de Corriente y Resistencia\n";
					cin>>opc;
					switch(opc){
					system("CLS");
					case '1':
						cout<<"Escriba el valor del voltaje\n";
						cin>>e;
						cout<<"Escriba el valor de la resistencia\n";
						cin>>r;
						ans=(e*e)/r;
						cout<<"La potencia es ";
						pntans(1,ans);
						cout<<"W\n";						
					break;
					case '2':
						cout<<"Escriba el valor del voltaje\n";
						cin>>e;
						cout<<"Escriba el valor de la corriente (En Ampers)\n";
						cin>>i;
						ans=e*i;
						cout<<"La potencia es ";
						pntans(1,ans);
						cout<<"W\n";
					break;
					case '3':
						cout<<"Escriba el valor de la corriente (En Ampers)\n";
						cin>>i;
						cout<<"Escriba el valor de la resistencia\n";
						cin>>r;
						ans=(i*i)*r;
						cout<<"La potencia es ";
						pntans(1,ans);
						cout<<"W\n";
					break;
					default:
						cout<<"Opcion Invalida\n";
					break;
				}
				}
			system("PAUSE");
			return ans;
}
//-------------------------------------Resistencias-&-Capacitores-----------------------------------------------
		long double resistencias(){
			system("CLS");
			char opc;
			float r,rt=0,n,i;
			cout<<"Calculadora De Resistencias\t"<<char(95)<<char(47)<<char(92)<<char(47)<<char(92)<<char(47)<<char(92)<<char(95)<<"\n\nPresiona P para calcular resistencias en paralelo o S en serie\n";
			cin>>opc;
			if(opc=='P'||opc=='p'){
			cout<<"Cuantas resistencias calcularas en Paralelo?\n";
			cin>>n;
			for(i=0;i<n;i++){
			cout<<"Escribe el valor de la Resistencia "<<i+1<<" en ohms\n";
			cin>>r;
			rt+=(1/r);
			}
			cout<<"La resistencia total en Paralelo es: "<<1/rt<<" ohms\n";
			ans=1/rt;
			}else{
				if(opc=='S'||opc=='s'){
			cout<<"Cuantas resistencias calcularas en Serie?\n";
			cin>>n;
			for(i=0;i<n;i++){
			cout<<"Escribe el valor de la resistencia "<<i+1<<" en ohms\n";
			cin>>r;
			rt+=r;
			}
			cout<<"La resistencia total en Serie es: "<<rt<<" ohms\n";
			ans=rt;
			}else{
				cout<<"Opcion Invalida\n";
				}
			}
			system("PAUSE");
			return ans;
		}
		long double capacitores(){
			system("CLS");
			char opc;
			float c,ct=0,n,i;
			cout<<"\nCalculadora De Capacitores\t"<<char(180)<<char(195)<<"\n\nPresiona P para calcular capacitores en paralelo o S en serie\n";
			cin>>opc;
			if(opc=='P'||opc=='p'){
			cout<<"Cuantos capacitores calcularas en Paralelo?\n";
			cin>>n;
			for(i=0;i<n;i++){
			cout<<"Escribe el valor del capacitor "<<i+1<<" en "<<char(230)<<"F\n";
			cin>>c;
			ct+=c;
			}
			cout<<"El valor de capacitores total en Paralelo es: "<<ct<<char(32)<<char(230)<<"F\n";
			ans=ct;
			}else{
				if(opc=='S'||opc=='s'){
			cout<<"Cuantos capacitores calcularas en Serie?\n";
			cin>>n;
			for(i=0;i<n;i++){
			cout<<"Escribe el valor del capacitor "<<i+1<<" en "<<char(230)<<"F\n";
			cin>>c;
			ct+=(1/c);
			}
			cout<<"El valor de capacitores total en Serie es: "<<1/ct<<char(32)<<char(230)<<"F\n";
			ans=1/ct;
			}else{
				cout<<"Opcion Invalida\n";
				}
			}
			system("PAUSE");
			return ans;
		}
//----------------------------VRMS-PP-----------------------------------------------------------
long double vrmspp(){
		system("CLS");
		long double v;
		char opc;
		cout<<"Que desea calcular?\nPresione V para Voltaje RMS (Eficaz)\nPresione P para Voltaje Pico a Pico\n";
		cin>>opc;
		switch(opc){
			case 'V':
			case 'v':
				system("CLS");
				cout<<"Escriba el Voltaje Pico a Pico:\n";
				cin>>v;
				ans=v*(1/sqrt(2));
				cout<<"El Voltaje "<<v<<"pp = "<<ans<<"VRMS\n";
			break;
			case 'P':
			case 'p':
				system("CLS");
				cout<<"Escriba el Voltaje RMS:\n";
				cin>>v;
				ans=v*sqrt(2);
				cout<<"El Voltaje "<<v<<"RMS = "<<ans<<"Vpp\n";
			break;
		default:
			cout<<"Opcion Invalida\n";
		break;
		}
	system("PAUSE");
	return ans;
}
//---------------------------COMPUERTAS-DIAGRAMAS-----------------------------------------------------------
void diagrama(int matricula){
	int cont=0;
	int j;
	j=14;
	switch(matricula){
		case 7400:
		case 7408:
		case 7432:
		case 7486:
		cout<<endl;
		cout<<"\t\t\t";
		cont=0;
		for(int i=-2;i<40;i++){
			if(i%5==0 && i<5){
				cout<<"    VCC";
			}else{
				if(i%5==0 && i>5){
					if(cont==2){
						cout<<"OUT ";
						cont=0;
					}else{
						cout<<"IN ";
						cont++;
					}
				}else{
					if(i>5){
					cout<<" ";
					}
				}
			}
		}
		cout<<endl;
		break;
		case 7404:
			cont=0;
			cout<<"\t\t\t";
			for(int i=-2;i<40;i++){
				if(i%5==0 && i<5){
					cout<<"    VCC";
				}else{
					if(i%5==0 && i>5){
						if(cont==1){
							cout<<"OUT ";
							cont=0;
						}else{
							cout<<"IN ";
							cont++;
						}
					}else{
						if(i>5){
						cout<<" ";
						}
					}
				}
			}
			cout<<endl;
		break;
		case 7402:
			cont=0;
			cout<<"\t\t\t";
			for(int i=-2;i<40;i++){
				if(i%5==0 && i<5){
					cout<<"    VCC";
				}else{
					if(i%5==0 && i>5){
						if(cont==0){
							cout<<"OUT ";
							cont=2;
						}else{
							cout<<"IN ";
							cont--;
						}
					}else{
						if(i>5){
						cout<<" ";
						}
					}
				}
			}
			cout<<endl;
		break;
		case 7466:
			cont=0;
			cout<<"\t\t\t";
			for(int i=-2;i<40;i++){
				if(cont==0 && i==25){
					break;
				}
				if(i%5==0 && i<5){
					cout<<"    VCC";
				}else{
					if(i%5==0 && i>5){
						if(cont==2){
							cout<<"OUT ";
							cont=0;
						}else{
							cout<<"IN ";
							cont++;
						}
					}else{
						if(i>5){
						cout<<" ";
						}
					}
				}
			}
			//---------------------
			cont=0;
			for(int i=-2;i<40;i++){
				if(i==11 && cont==0){
					break;
				}
					if(i%5==0){
						if(cont==0){
							cout<<"OUT ";
							cont=2;
						}else{
							cout<<"IN ";
							cont--;
						}
					}else{
						if(i>0){
						cout<<" ";
						}
					}
			}
			cout<<endl;
		break;
	}
//FINSWITCH1---------------------------------------------------------------------------------------------------------------
		cout<<"\t\t\t";
		for(int i=-4;i<35;i++){
			if(i%5==0){
				if(j>=10){
					cout<<" "<<j;
				}else{
					cout<<"  "<<j;
				}
				j--;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
		cout<<"\t\t\t";
		cout<<" ";
		for(int i=-4;i<35;i++){
			if(i%5==0){
				cout<<char(218)<<char(196)<<char(191);
			}else{
				cout<<"_";
			}
		}
		cout<<endl;
		cout<<"\t\t\t";
		for(int i=0;i<10;i++){
			cout<<char(179);
			if(i==5){
				cout<<"*";
			}
			for(int k=-4;k<50;k++){
				if(k+1==50){
					cout<<char(179);
				}else{
					if(i!=5 || k>=0){
						if(k==22 && i==5){
							cout<<matricula;
						}else{
							cout<<" ";
						}
					}
				}
			}
			cout<<endl;
			cout<<"\t\t\t";
		}
		cout<<" ";
		for(int i=-4;i<35;i++){
			if(i%5==0){
				cout<<char(192)<<char(196)<<char(217);
			}else{
				cout<<char(238);
			}
		}
		cout<<endl;
		j=1;
		cout<<"\t\t\t";
		for(int i=-4;i<35;i++){
			if(i%5==0){
				if(j>=10){
					cout<<" "<<j;
				}else{
					cout<<"  "<<j;
				}
				j++;
			}else{
				cout<<" ";
			}
		}
//SWITCH2---------------------------------------------------------------------------------------------------------------
cout<<"\t\t\t";
		switch(matricula){
		case 7400:
		case 7408:
		case 7432:
		case 7486:
		cout<<endl;
		cout<<"\t\t\t";
		cont=0;
		for(int i=-2;i<45;i++){
			if(i%5==0 && i+5==45){
				cout<<"GND";
			}else{
				if(i%5==0 && (i>5 && i<40)){
					if(cont==2){
						cout<<"OUT ";
						cont=0;
					}else{
						cout<<"IN ";
						cont++;
					}
				}else{
					if(i>5){
					cout<<" ";
					}
				}
			}
		}
		cout<<endl;
		break;
		case 7404:
			cout<<endl;
			cout<<"\t\t\t";
			cont=0;
			for(int i=-2;i<40;i++){
				if(i%5==0 && i<5){
				}else{
					if(i%5==0 && i>5){
						if(cont==1){
							cout<<"OUT ";
							cont=0;
						}else{
							cout<<"IN ";
							cont++;
						}
					}else{
						if(i>5){
						cout<<" ";
						}
					}
				}
			}
			cout<<"GND";
			cout<<endl;
		break;
		case 7402:
			cout<<endl;
			cout<<"\t\t\t";
		cont=0;
		for(int i=-2;i<45;i++){
			if(i%5==0 && i+5==45){
				cout<<"GND";
			}else{
				if(i%5==0 && (i>5 && i<40)){
					if(cont==0){
						cout<<"OUT ";
						cont=2;
					}else{
						cout<<"IN ";
						cont--;
					}
				}else{
					if(i>5){
					cout<<" ";
					}
				}
			}
		}
		cout<<endl;
		break;
		case 7466:
			cout<<endl;
			cout<<"\t\t\t";
			cont=0;
			for(int i=-2;i<40;i++){
				if(cont==0 && i==25){
					break;
				}
				if(i%5==0 && i<5){
				}else{
					if(i%5==0 && i>5){
						if(cont==2){
							cout<<"OUT ";
							cont=0;
						}else{
							cout<<"IN ";
							cont++;
						}
					}else{
						if(i>5){
						cout<<" ";
						}
					}
				}
			}
			//---------------------
			cont=0;
			for(int i=-2;i<40;i++){
				if(i==11 && cont==0){
					break;
				}
					if(i%5==0){
						if(cont==0){
							cout<<"OUT ";
							cont=2;
						}else{
							cout<<"IN ";
							cont--;
						}
					}else{
						if(i>0){
						cout<<" ";
						}
					}
			}
			cout<<"   GND\n";
		break;
	}
}
//----------------------------BOOL-BOOLE-BOOLEAN---------------------------------------------------------
float boole(){	
	bool b,a;
	char opc;
	while(opc!='Q'){
		system("CLS");
	cout<<"\nPresiona A para AND\nPresiona O para OR\nPresiona N para NOT\nPresiona X para XOR\nPresiona B para NAND\nPresiona P para NOR\nPresiona Y para XNOR\nPresiona Q para salir\n";
	cin>>opc;
	switch(opc){
		case 'A':
		case 'a':	
		system("CLS");
		cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>a;
	cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>b;
		cout<<"\n"<<a<<" AND "<<b<<" = "<<a*b<<"\nCircuito Integrado de la compuerta logica AND es 74LS08\nCon Pines 14-Vcc,7-GND Y configuracion Entrada,Entrada,Salida\n";	
		cout<<endl;
		diagrama(7408);
		cout<<endl;
		ans=a*b;
		system("PAUSE");
		break;
	case 'O':
	case 'o':	
		system("CLS");
		cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>a;
	cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>b;
		if(a==0 && b==0){
			ans=0;
		}else{
			ans=1;
		}
		cout<<"\n"<<a<<" OR "<<b<<" = "<<ans<<"\nCircuito Integrado de la compuerta logica OR es 74LS32\nCon Pines 14-Vcc,7-GND Y configuracion Entrada,Entrada,Salida\n";
		cout<<endl;
		diagrama(7432);
		cout<<endl;
		system("PAUSE");
		break;
	case 'N':
	case 'n':	
		system("CLS");
		cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>a;
	cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>b;
		cout<<a<<" (A) NOT = "<<!a<<"\n";
		cout<<b<<" (B) NOT = "<<!b<<"\n";
		cout<<"Circuito Integrado de la compuerta logica NOT es 74LS04\nCon Pines 14-Vcc,7-GND Y configuracion Entrada,Salida\n";
		cout<<endl;
		diagrama(7404);
		cout<<endl;
		system("PAUSE");
		break;
	case 'X':
	case 'x':	
		system("CLS");
		cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>a;
	cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>b;
			if(a==b){
			cout<<"\n"<<a<<" XOR "<<b<<" = 0 \n";
			cout<<"Circuito Integrado de la compuerta logica XOR es 74LS86\nCon Pines 14-Vcc,7-GND Y configuracion Entrada,Entrada,Salida\n";
			cout<<endl;
			diagrama(7486);
			cout<<endl;
				ans=0;
		}else{
			cout<<"\n"<<a<<" XOR "<<b<<" = 1 \n";
			cout<<"Circuito Integrado de la compuerta logica XOR es 74LS86\nCon Pines 14-Vcc,7-GND Y configuracion Entrada,Entrada,Salida\n";
			cout<<endl;
			diagrama(7486);
			cout<<endl;
			 ans=1;
		}
		system("PAUSE");
		break;
	case 'B':
	case 'b':	
		system("CLS");
		cout<<"Escribe un numero booleano (0 o 1)\n";
		cin>>a;
		cout<<"Escribe un numero booleano (0 o 1)\n";
		cin>>b;
		cout<<a<<" NAND "<<b<<" = "<<!(a*b)<<"\nCircuito Integrado de la compuerta logica NAND es 74LS00\nCon Pines 14-Vcc,7-GND\nY configuracion Entrada,Entrada,Salida\n";
		cout<<endl;
		diagrama(7400);
		cout<<endl;
		ans=!(a*b);
		system("PAUSE");
	break;
	case 'P':
	case 'p':	
		system("CLS");
		cout<<"Escribe un numero booleano (0 o 1)\n";
		cin>>a;
		cout<<"Escribe un numero booleano (0 o 1)\n";
		cin>>b;
		if(a==0 && b==0){
			ans=1;
		}else{
			ans=0;
		}
		cout<<a<<" NOR "<<b<<" = "<<ans<<"\nCircuito Integrado de la compuerta logica NOR es 74LS02\nCon Pines 14-Vcc,7-GND Y configuracion Salida,Entrada,Entrada\n";
		cout<<endl;
		diagrama(7402);
		cout<<endl;
		system("PAUSE");
	break;
	case 'Y':
	case 'y':	
		system("CLS");
		cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>a;
	cout<<"Escribe un numero booleano (0 o 1)\n";
	cin>>b;
			if(a==b){
			cout<<"\n"<<a<<" XNOR "<<b<<"= 1\nCircuito Integrado de la compuerta logica XNOR es 74LS66\nCon Pines 14-Vcc,7-GND Y configuracion Entrada,Entrada,Salida en pines 1,2,3 & 13,12,11\nY con Salida,Entrada,Entrada en pines 4,5,6 & 11,12,13\n";
			cout<<endl;
			diagrama(7466);
			cout<<endl;
			 ans=1;
		}else{
		cout<<"\n"<<a<<" XNOR "<<b<<" = 0 \nCircuito Integrado de la compuerta logica XNOR es 74LS66\nCon Pines 14-Vcc,7-GND Y configuracion Entrada,Entrada,Salida en pines 1,2,3 & 8,9,10\nY con Salida,Entrada,Entrada en pines 4,5,6 & 11,12,13\n";
		cout<<endl;
		diagrama(7466);
		cout<<endl;
		 ans=0;
		}
		system("PAUSE");
	break;
		case 'Q':
		case 'q':
			opc='Q';
			break;
		default:
			system("CLS");
			cout<<"Opcion Invalida\n";
			system("PAUSE");
			break;
		}
	}
}

//----------------------------CODIGO-RESISTENCIAS---------------------------------------------------------
void codigoresistencias(){
	//n,c,r,o*,a,v,b*,m,g,w*
	char cod,mm=241,opc;
	int i,j=0,aux,f1,f2,f3,val;
	string c1,c2,c3,c4;
	while(opc!='Q'){	
	system("CLS");
	cout<<"Presiona C para calcular valor por codigo de colores\nPresiona V para calcular el codigo de colores por valor\nPresiona Q para salir\n";
	cin>>opc;
	switch(opc){
	case 'C':
	case 'c':
		system("CLS");
	cout<<"Escribe el codigo de la resistencia a 3 franjas estandar"<<"(Considere la tolerancia "<<mm<<"5%)\nPresiona N para Negro\nPresiona C para Cafe\nPresiona R para Rojo\nPresiona O para Naranja\nPresiona A para Amarillo\nPresiona V para Verde\nPresiona B para Azul\nPresiona M para Morado\nPresiona G para Gris\nPresiona W para Blanco\n";
	for(j=0;j<3;j++){
		cout<<"\nEscribe la franja "<<j+1<<"\n";
		cin>>cod;
		switch(cod){
		case 'N':
		case 'n':
		i=0;	
		break;
		case 'C':
		case 'c':
		i=1;
		break;
		case 'R':
		case 'r':
		i=2;
		break;
		case 'O':
		case 'o':
		i=3;
		break;
		case 'A':
		case 'a':
		i=4;
		break;
		case 'V':
		case 'v':
		i=5;
		break;
		case 'B':
		case 'b':
		i=6;
		break;
		case 'M':
		case 'm':
		i=7;
		break;
		case 'G':
		case 'g':
		i=8;
		break;
		case 'W':
		case 'w':
		i=9;
		break;
		default:
			cout<<"Opcion Invalida\n";
			j=-1;
		break;
		}
		if(j==0){
			f1=i;
			//cout<<"\n"<<i<<"\n";
		}
		if(j==1){
			f2=i;
			//cout<<"\n"<<i<<"\n";
		}
		if(j==2){			
			aux=i;
			//cout<<"\n"<<i<<"\n";
		}
	}
		cout<<"\n"<<f1<<f2;
	if(aux!=0){
			for(int a=0;a<aux;a++){
				cout<<"0";
			}if(aux==0){
				aux=' ';
			}
			}
	cout<<" ohms "<<mm<<"5%\n";
	system("PAUSE");
	break;
	//VALOR-------------------------------------------------
	case 'V':
	case 'v':
		system("CLS");
	cout<<"Escribe el valor de la resistencia en ohms"<<"(Considere la tolerancia "<<mm<<"5%)\n";
		cin>>val;
		fflush(stdin);
		//f1-------------------------------------------------
		if(val<10){
			f1=val;
		}
		if(val>9 && val<=100){
			f1=val/10;
		}
		if(val>99 && val<=1000){
			f1=val/100;
		}
		if(val>999 && val<=10000){
			f1=val/1000;
		}
		if(val>9999 && val<=100000){
			f1=val/10000;
		}
		if(val>99999 && val<=1000000){
			f1=val/100000;
		}
		if(val>999999 && val<=10000000){
			f1=val/1000000;
		}
		//cout<<"\n"<<f1<<"\n";
		switch(f1){
		case 1:
		c1="CAFE";
		break;
		case 2:
		c1="ROJO";
		break;
		case 3:
		c1="NARANJA";	
		break;
		case 4:
		c1="AMARILLO";	
		break;
		case 5:
		c1="VERDE";	
		break;
		case 6:
		c1="AZUL";	
		break;
		case 7:
		c1="MORADO";	
		break;
		case 8:
		c1="GRIS";	
		break;
		case 9:
		c1="BLANCO";	
		break;
		default:
		cout<<"Opcion Invalida\n";
		j=-1;
		break;
		}	
		//f2-------------------------------------------------
		if(val<10){
			f2=1;
		}
		if(val>9 && val<=100){
			f2=(val-(f1*10));
		}
		if(val>99 && val<=1000){
			f2=(val-(f1*100))/10;
		}
		if(val>999 && val<=10000){
			f2=(val-(f1*1000))/100;
		}
		if(val>9999 && val<=100000){
			f2=(val-(f1*10000))/1000;
		}
		if(val>99999 && val<=1000000){
			f2=(val-(f1*100000))/10000;
		}
		if(val>999999 && val<=10000000){
			f2=(val-(f1*1000000))/100000;
		}
		//cout<<"\n"<<f2<<"\n";
		switch(f2){
		case 0:
		c2="NEGRO";	
		break;
		case 1:
		c2="CAFE";
		break;
		case 2:
		c2="ROJO";
		break;
		case 3:
		c2="NARANJA";	
		break;
		case 4:
		c2="AMARILLO";	
		break;
		case 5:
		c2="VERDE";	
		break;
		case 6:
		c2="AZUL";	
		break;
		case 7:
		c2="MORADO";	
		break;
		case 8:
		c2="GRIS";	
		break;
		case 9:
		c2="BLANCO";	
		break;
		default:
		cout<<"Opcion Invalida\n";
		j=-1;
		break;
		}
		//f3-------------------------------------------------
		if(val<100){
			f3=0;
		}
		if(val>=100 && val<1000){
			f3=1;
		}
		if(val>=1000 && val<10000){
			f3=2;
		}
		if(val>=10000 && val<100000){
			f3=3;
		}
		if(val>=100000 && val<1000000){
			f3=4;
		}
		if(val>=1000000 && val<10000000){
			f3=5;
		}
		if(val>=10000000 && val<100000000){
			f3=6;
		}
		if(val>=100000000 && val<1000000000){
			f3=7;
		}
		if(val>=1000000000 && val<10000000000){
			f3=8;
		}
		//cout<<"\n"<<f3<<"\n";
		switch(f3){
		case 0:
		c3="NEGRO";	
		break;
		case 1:
		c3="CAFE";
		break;
		case 2:
		c3="ROJO";
		break;
		case 3:
		c3="NARANJA";	
		break;
		case 4:
		c3="AMARILLO";	
		break;
		case 5:
		c3="VERDE";	
		break;
		case 6:
		c3="AZUL";	
		break;
		case 7:
		c3="MORADO";	
		break;
		case 8:
		c3="GRIS";	
		break;
		case 9:
		c3="BLANCO";	
		break;
		default:
		cout<<"Opcion Invalida\n";
		break;
		}
		//FIN-------------------------------------------------------------------
		c4="DORADO";
		cout<<"\n"<<c1<<", "<<c2<<", "<<c3<<", "<<c4<<"\n";
		system("PAUSE");
	break;
	default:
		system("CLS");
		cout<<"Opcion Invalida\n";
		system("PAUSE");
		break;
	case 'Q':
	case 'q':
		opc='Q';
		break;
	}		
	}
}
};
//-----------------------------------------------Main----------------------------------------------------------
calculadora::menu(){
	calcesp calc;
	 HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
  WORD wOldColorAttrs;
  CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	char opc,a=94,s1=158,senie=126,marca=169,aee=130,ae=144,aa=160,ai=161,ao=162;
	char sure=1;
	while(opc!='Q'){
	system("CLS");// S,R,M,D,A,F,I,Q,J,L,N,1,2,3,4,5,6,O,E,T,U,Z,P
	//CHECAR FUNC TRIGONOMETRICAS***
	//cout<<"\n_______________________________________________________________________________________________\n";
	  cout<<"\n\n\n\n\n\t\t\t\tÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎ\n";
//	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	cout<<"\t\t\t\t\t\t\t\tINSTITUTO POLIT"<<ae<<"CNICO NACIONAL\n";
	cout<<"\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n";
	
//	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
	cout<<"\t\t\t\t\t\t\t\t\tESIME Culhuac"<<aa<<"n\n";
	cout<<"\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n";
//	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE);
	cout<<"\t\t\t\t\t\t\t\t   Ingenier"<<ai<<"a En Computaci"<<ao<<"n\n\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n"; 
//	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
	cout<<"\t\t\t\tÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎ\n";
	cout<<"\n\t\t\t\t\t\t\t\t  Calcuadora Cient"<<ai<<"fica\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tQu"<<aee<<" desea hacer?\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona S para sumar.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona R para restar.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona M para multiplicar.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona D para dividir.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona O para obtener modulo.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona F para factorial.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona I para sacar la inversa de ANS (x"<<a<<"-1).\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona U para calcular raiz cuadrada.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona T para hacer x"<<a<<"y.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona J para (n"<<s1<<"10"<<a<<"y o n"<<s1<<"10"<<a<<"-y).\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona N para cambiar a ANS de signo.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona L Para logartimos.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona 1 para obtener Seno.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona 2 para obtener Coseno.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona 3 para obtener Tangente.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona 4 para obtener Cotangente.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona 5 para obtener Secante.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona Y para elegir prefijos.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona 6 para obtener Cosecante.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona E para calcular el numero de euler.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona P para mostrar el valor de Pi.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona A para mostrar respuesta (ANS).\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona Z para hacer formulas espec"<<ai<<"ficas.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona C para ver las opciones.\n\t\t\t\t_______________________________________________________________________________________________\n\t\t\t\tPresiona Q Para salir.\n\t\t\t\t_______________________________________________________________________________________________\n";
	cin>>opc;
	switch(opc){
		case 'S':
		case 's':
			suma();
			break;	
		case 'R':
		case 'r':
			resta();
			break;	
		case 'M':
		case 'm':
			mult();
			break;	
		case 'D':
		case 'd':
			div();
			break;
		case 'A':
		case 'a':
			fflush(stdin);
			system("CLS");
			cout<<"\nANS = ";
			pntans(enge,ans);
			cout<<"\n";
			system("PAUSE");
			break;
		case 'F':
		case 'f':
			fact();
			break;
		case 'I':
		case 'i':
			inv();
			break;
		case 'J':
		case 'j':
			E10();
			break;
		case 'L':
		case 'l':
			loga();
			break;
		case 'N':
		case 'n':
			sign();
			break;
		case '1':
			tsen();
			break;
		case '2':
			tcos();
			break;
		case '3':
			ttan();
			break;
		case '4':
			tcot();
			break;
		case '5':
			tsec();
			break;
		case '6':
			tcsc();
			break;
		case 'Y':
		case 'y':	
			eng();
			break;
		case 'E':
		case 'e':
			euler();
			break;
		case 'U':
		case 'u':
			raiz();
			break;
		case 'T':
		case 't':
			potencia();
			break;
		case 'O':
		case 'o':
			mod();
			break;
		case 'K':
		case 'k':
			primos();
			break;
		case 'P':
		case 'p':
			pin();
			break;
		case 'Z':
		case 'z':
			calc.formulas();
			break;
		case 'C':
		case 'c':
			choice();
			break;
		case 'Q':
		case 'q':
			system("CLS");	
			fflush(stdin);		
			cout<<"Seguro que deseas salir?\nPresiona Q para salir y cualquier tecla para NO salir\n";
			cin>>sure;
			while(sure=='Q' || sure=='q'){
				char ae=144,aa=160,ai=161,ao=162;
				system("CLS");
				system("COLOR C");
				 cout<<"\n\n\n\n\n\t\t\t\tÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎ\n";
	//SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	cout<<"\t\t\t\t\t\t\t\tINSTITUTO POLIT"<<ae<<"CNICO NACIONAL\n";
	cout<<"\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n";
	
	//SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
	cout<<"\t\t\t\t\t\t\t\t\tESIME Culhuac"<<aa<<"n\n";
	cout<<"\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n";
	 //SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE);
	cout<<"\t\t\t\t\t\t\t\t   Ingenier"<<ai<<"a En Computaci"<<ao<<"n\n\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n";
	cout<<"\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n";
	 //SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE);
	cout<<"\t\t\t\t\t\t\t\t\tHasta pronto!\n\t\t\t\t\t\t\t\t\t"<<senie<<"Calculadora\t\t\t\t\n\t\t\t\t\t\t\t"<<marca<<"Ernesto Romero Rios & Oscar Antonio De La Cruz Osorio\n\n\t\t\t\tº º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º º\n";
	//SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
	cout<<"\t\t\t\tÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎÎ\n";
			//cout<<"\t\tHasta pronto!\n\t\t"<<senie<<"Calculadora\n\t\t\t\t"<<marca<<"Ernesto Romero Rios\n";
			opc='Q';
			break;
			}
			break;
		default:
			system("CLS");
			cout<<"Opcion Invalida\n";
			system("PAUSE");
			break;
	}
	}
}
int main(int argc, char** argv){
	calculadora calc;
	system("CLS");
	calc.menu();
	system("PAUSE");
	return 0;
}