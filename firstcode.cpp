#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<ctime>
#include<vector>
using namespace std;

vector<string> aic,p1c,p2c,p3c,p4c;
string card[]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

void drawcard(vector<string> &);
void findscore(vector<string> &,int &);
void gamestart();
void insurance();
void resetcard(vector<string> &);

int main()
{
    //string card[]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    int cs[]={1,2,3,4,5,6,7,8,9,10,10,10,10};

    srand(time(0));

    vector<string> aic,pc1,pc2,pc3,pc4;
    int money[4],bet[4],sumcard[4],dealermoney;

    for(int i=0;i<4;i++)
    {
        money[i]=10000;
        cin >> bet[i];
        money[i]-=bet[i];
    }

    gamestart();
    if(aic.begin()=="A")
        insurance();
    gamestart();


    return 0;
}

void drawcard(vector<string> &x)
{
    x.push_back(card[rand()%13]);
}

void findscore(vector<string> &x,int &score)
{
    int sumscore=0;
    for(int i=0;i<a.size();i++)
    {
        sumscore+=a[i];
    }
    score=sumscore;
}

void gamestart()
{
    drawcard(aic);
    drawcard(p1c);
    drawcard(p2c);
    drawcard(p3c);
    drawcard(p4c);
}

void insurance()
{
    cout << "Dealer got an A card,\nDo you want to make an Insurance for half of your bet?";
    cin >> ans;
}

void resetcard(vector<string> &x)
{
    for(int i=0;i<x.size();i++)
        x.pop_back();
}

