// EloRatingSystem main.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){

/*int K,RA,RB;
float score;


ifstream inFile("file.in", ios::in);
if(!inFile) {
  cerr << "Failed opening" << endl;
  exit(1);
}

inFile >> K >> RA >> RB;
ofstream outFile("file.out", ios::out);

outFile << RA << "\t" << RB << endl; */
/*int t_RA,t_RB,t_K,t_score;
t_RA=1613;
t_RB=1609;
t_K=32;
t_score=0;
double notrounded_RA=t_RA+t_K*(t_score-1/(1+(pow(10,(t_RB-t_RA)/400))));
double notrounded_RB=t_RB+t_K*((1-t_score)-1/(1+(pow(10,(t_RA-t_RB)/400))));
int t_RA=(int)(notrounded_RA+0.5);
int t_RB=(int)(notrounded_RB+0.5);
    cout<<t_RA<<"\t"<<t_RB<<endl;*/

/*int t_RA=1613;
int t_RB=1609;
int t_K=32;
int t_score=0;
double notrounded_RA=t_RA+t_K*(t_score-1/(1+(pow(10,(t_RB-t_RA)/400))));
  int a=(int)(notrounded_RA+0.5);
    cout<<a<<endl;*/
double Ea,Eb;
double s[6]={0,0.5,0.5,0,0,0};
int Ra=1613;
int Rb=1609;
int k=32;

for (int i = 0; i < 6; i++) {

Ea = 1 / (1 + pow(10, (Rb - Ra) / 400));
Eb = 1 / (1 + pow(10, (Ra - Rb) / 400));
Ra = (int)(Ra + k*(s[i] - Ea));
Rb = (int)(Rb + k*(1-s[i] - Eb));
cout << Ra << "\t" << Rb << "\t" <<Ea<<"\t"<<Eb<<"\t"<<s[i]<< endl;
			
		}
return 0;
}
