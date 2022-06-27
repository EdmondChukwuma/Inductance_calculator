#include<iostream>


using namespace std;
int main(){
	float PI=3.1459, cnst=0.00000126 ;
	int p,n,turns;
	float d,area,l, LI;
	
	cout<<"\t\t\tWELCOME TO MY INDUCTANCE CALCULATOR.\n\n";
	
	cout<<"\tPearmeability values for:\n	 1) Air=1.0\n	 2) Plastic=1.0\n	 3) Iron core=100\n	 4) Ferrite Core=10 - 1000\n\n";
		
	
	cout<<"\tEnter your Pearmeabilty Value:";
	cin>>p;
	
	cout<<"\n\n";
	cout<<"\tEnter Number of turns:";
	cin>>n;
	turns=n*n;
	
	cout<<"\n\n";
	
	cout<<"\tEnter diameter of wounded object:";
	cin>>d;
	area=PI*d*d/4;
	
	cout<<"\n\n";
	
	cout<<"\tEnter Length of the Coil (meters)=";
	cin>>l;
	
	cout<<"\n\n";
	
	LI=(p*turns*area*cnst)/l;
	
	cout<<"\tThe Inductance, L(H)=";
	cout<<LI;
	cout<<"\n\n";
	
}
