#include<iostream>
#include<ctime>
using namespace std;

/*class Minion{
public:
int map[22][52];
int x[22][52];
int y[22][52];
};*/
//void readmap&minion(){cin>>;};

int main(){

int timeleft,mana;

int deck[8]={5,1,2,3,4,6,7,8};
//int *handcards[4]={deck[0],deck[1],deck[2],deck[3]};
//Minion minion;

//int map&minion[22][52];

//cout<<"5 1 2 3 4 6 7 8"<<endl;
cout<<deck[0]<<" "<<deck[1]<<" "<<deck[2]<<" "<<deck[3]<<" "<<deck[4]<<" "<<deck[5]<<" "<<deck[6]<<" "<<deck[7]<<endl;

while(1==1){
cin>>timeleft>>mana>>deck[0]>>deck[1]>>deck[2]>>deck[3];
/*for(int i=0;i<=22;i++){
  for(int j=0;j<=52;j++){
    cin>>minion.map[i][j];
    minion.x[i][j]=i;
    minion.y[i][j]=j;
}
}*/
//if(mana>=5&&deck[0]==5)
//cout<<"1 5 12 12"<<endl;
//readinformation();
//else
//cout<<"0"<<endl;
//readmap&minion();
cout<<"1 7 5 12"<<endl;
cout<<"1 4 17 12"<<endl;
cout<<"1 3 4 12"<<endl;
cout<<"1 8 6 12"<<endl;
cout<<"1 1 7 12"<<endl;
cout<<"1 6 16 12"<<endl;
cout<<"1 5 15 12"<<endl;
cout<<"1 2 14 12"<<endl;
cout<<"0"<<endl;


};
}
