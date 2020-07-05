#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream info;
    int linecount;
    string a = "Artist \t\t\t Title \t\t\t Price \t\t\t Genre \nMuse \t\t Black Holes and Revelations \t 9.99 \t\t\t Rock\n";
    string b = "Muse \t\t The Resistance \t\t 11.99 \t\t\t Rock \nMr. Scruff \t Ninja Tuna \t\t\t 9.99 \t\t\t Electronica\n";
    string c = "Deadmau5 \t For Lack of Better Name \t 9.99 \t\t\t Electro House \nMark Ronson \t Record Collection \t\t 11.99 \t\t\t Alternative Rock\n";
    string d = "Mark Ronson \t Version \t\t\t 12.99 \t\t\t Pop \nAnimal Collective  Merriweather Post Pavilion \t 12.99 \t\t\t Electronica";
    string words = a+b+c+d;
    string data;
    int jumlahchar;

    info.open("INFO.txt");

    info<<words;
    info.close();

    fstream infoline("INFO.txt",ios::in);
    info>>data;
    linecount=0;
    while(!info.eof())
    {
       info>>data;
       cout<<data<<endl;
    }

    info.open("INFO.txt",ios::in);

    char alphabet[200];
    int i = 0;
    while (!info.eof())
    {
        info.getline(alphabet, 200);
        i++;
    }
    cout<< i << " baris";
    info.close();

    return 0;
}
