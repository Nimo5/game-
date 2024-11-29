#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void dealerturn(int* hp ,int l[], int b[]){
// 1: dealer shut the player
// 2: dealer shut him self
// 3: dealer use Apple
// 4: dealer use Microscope
// 5: dealer use Knife
// 6: dealer use izem
// 7: dealr use Handcuff

int chow=1;//rand() %7+1;
// dealer shut the player
if(chow==1){
    int k=rand() %8+1;
    for(int i=1;i<8;i++){
        if(l[i]==k){
            l[i]=0;
            (*hp)--;
            cout<<"the  dealer shut was live you have "<<*hp<<" live know "<<endl;
            i=8;
        }else if( b[i]==k){
            b[i]=0;
             cout<<"the daeler  shut was blank  you have "<<*hp<<" live know "<<endl;
            i=0;
        }

    }



}
}
//if the player want to shut the self
void shuts( int* hp, int l[], int b[]){

    int k=rand() %8+1;
    for(int i=1;i<8;i++){
        if(l[i]==k){
            l[i]=0;
            (*hp)--;
            cout<<"the shut was live you have "<<*hp<<" live know "<<endl;
            dealerturn(hp,l,b);
            i=8;
        }else if( b[i]==k){
            b[i]=0;
             cout<<"the shut was blank you have "<<*hp<<" live know end  the dealer turn skip "<<endl;
            i=8;
        }

    }


}
//if the player want to shut him dealer
void shutd(int* hd, int l[],int b[]){

    int k=rand() %8+1;
    for(int i=1;i<8;i++){
        if(l[i]==k){
                l[i]=0;
            (*hd)--;
            cout<<"the shut was live the dealer have "<<*hd<<" live know "<<endl;
            break;
        }else if( b[i]==k){
            b[i]=0;
             cout<<"the shut was blank   the dealer have "<<*hd<<" live know "<<endl;
            break;
        }

    }

}
//if the player want to use any item
void items(){

}
void di( int &hp, int &hd , int l[],int b[]){
    int gg;
cout<<" enter number ::";
cin>>gg;
if(gg == 00){
    shuts(&hp,l,b);
}else if(gg==11){
shutd(&hd,l,b);
}else if(gg==1 || gg==2 || gg==3 || gg==4 || gg==5 ) {
items();
}

}
// the game hear
void game2(){

    int hd=6;
    int  hp=6;
int num1= rand() % 5+1;
int num2= 8 - num1;
int l[num1] ;
int b[8-(num1+1)];
for(int i=0;i<=num1;i++){
    l[i]=i;
}
for ( int i=num1 ;i<8;i++){
b[i]=i;
}
cout<<" You have a "<<hp<<" live "<<endl;
    cout << "  ##   ##    ##   ##    ##   ##    ##   ##    ##   ##    ##   ## " << endl;
    cout << " #### ####  #### ####  #### ####  #### ####  #### ####  #### ####  " << endl;
    cout << "  #######    #######    #######    #######    #######    #######  " << endl;
    cout << "   #####      #####      #####      #####      #####      #####  "<< endl;
    cout << "    ###        ###        ###        ###        ###        ###  " << endl;
    cout << "     #          #          #          #          #          #  " << endl;
cout<<"and the dealer have "<<hd<<" live "<<endl;
    cout << "  ##   ##    ##   ##    ##   ##    ##   ##    ##   ##    ##   ## " << endl;
    cout << " #### ####  #### ####  #### ####  #### ####  #### ####  #### ####  " << endl;
    cout << "  #######    #######    #######    #######    #######    #######  " << endl;
    cout << "   #####      #####      #####      #####      #####      #####  "<< endl;
    cout << "    ###        ###        ###        ###        ###        ###  " << endl;
    cout << "     #          #          #          #          #          #  " << endl;
    cout<<" in the shotgun "<<num1<<" blank !!!!!!!!!"<<endl<<endl;
    for(int i =0;i<num1;i++){
    cout << "[_]" <<" ";
    }   cout<<endl<<endl<<" in the shotgun "<<num2<<" live round !!!!!!!!!"<<endl<<endl;
        for(int i =0;i<num2;i++){
    cout << "[||]" <<" ";
    }cout<<endl<<endl;

di( hp,hd,l,b);








}
// info fun +  simple game intro
void game(){
    int sho;
cout<<"do you want to know how the game work ? [=0] or enter  the game [=1]"<<endl;
cout<<"::";
cin>>sho;
    if(sho==0){
            int ens;
    cout << "You will play against your the dealer " << endl;
    cout << "You will have 8 shotgun bullets  some are blanks and others are live rounds." << endl;
    cout << "You need to shoot the dealer with the live rounds."<<endl;
    cout<< "If you shoot yourself with a blank, the dealer's turn is skipped." << endl;
    cout << " and you will  have 4 items:" << endl;
    cout << "           1 -> Apple: Restores one life." << endl;
    cout << "           2 -> Microscope: Lets you see what's in the gun." << endl;
    cout << "           3 -> Knife: Doubles the shot damage." << endl;
    cout << "           4 -> izem : Clears one shot from the gun." << endl;
    cout << "           5 -> Handcuff: Skip the dealer's next turn." << endl;
    cout << "           11 -> Shoot the dealer." << endl;
    cout << "           00 -> Shoot yourself." << endl;
    cout << " You can use the items at any time you want . "<<endl;
    cout<<" play ?[y=1/n=0]"<<endl;
    cout<<"::";
    cin>>ens;
    if(ens == 1){
        game2();

    }else if( ens == 0){
        return ;
    }else {
    cout<<endl;
    cout <<"please enter   a realnomber !!!!";
    cout<<endl;
    game();
    }
    }else if(sho == 1 ){
    game2();
    }else{
game();
    }
}
// start fun
void Start(){
int fstart ;
cout<<"do you want to start a new game ?"<<endl;
cout<<"----------------- yes = 1 ----- no = 0 ---------------";
cout<<endl;
cin>>fstart;
if(fstart == 1){
game();

}else if(fstart == 0) {
return;

}else{

cout<<"please enter a 1 if you want to play !!!!!!!!!! "<<endl;
cout<<"____________________________________________________"<<endl;
cout<<"do you want to start a new game ?"<<endl;
cin>>fstart;
if(fstart == 1){
game();

}else{
return;
}
}
}
int main()
{
int start ;
srand(time(0));
Start();





    return 0;
}
