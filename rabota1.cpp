#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{ 
cout << "Akteri iz seriala <<Mighty Morphin Power Rangers>>, 1993 "<< endl;

	int MENY,KRITERII,MW,M1;
	string buff,buff2;
	char x;
label1:
	cout<< "MENY: " << endl;
	cout << "1)Poisk" << endl;
	cout << "2)Bistrii perexod - polnii spisok akterov (1-3 sezon)" << endl;
	cin >> MENY;
	switch (MENY){
		
	{case 1:
		cout << "1)SEZON 1" << endl;
		cout << "2)SEZON 2" << endl;
		cout << "3)SEZON 3" << endl;
		cin >> KRITERII;}

	switch (KRITERII){
		{case 1://выбрали 1 сезон
		cout << "Filtrazija dannix:" << endl;
		cout << "1)man role - 1 sezona" << endl;
		cout << "2)woman role - 1 sezona" << endl;
		cin >> MW;}
	switch (MW) {{
	{case 1://выбрали муж. роли из 1 сезона
	 ifstream F1("MAN ROLE 1.txt");
	 while (!F1.eof()) {
	 getline (F1,buff);
 	cout <<buff<<endl;} 
 	F1.close();
cin>>M1;
     ifstream F2("AkteriM1.txt"); 
     for (int i = 1; i <= M1; i++){
	 getline(F2, buff2);}
	 cout<<buff2;
     F2.close();}}
	 break;	
{case 2:  //выбрали жен. роли из 1 сезона
	 ifstream F3("WOMAN ROLE 1.txt");
	 while (!F3.eof()) {
	 getline (F3,buff);
 	cout <<buff<<endl;} 
 	F3.close();
cin>>M1;
     ifstream F4("AkteriW1.txt"); 
     for (int i = 1; i <= M1; i++){
	 getline(F4, buff2);}
	 cout<<buff2<<endl;
     F4.close();}}
     break;
     
     {case 2://выбрали 2 сезон
		cout << "Filtrazija dannix:" << endl;
		cout << "1)man role - 2 sezona" << endl;
		cout << "2)woman role - 2 sezona" << endl;
		cin >> MW;}
	switch (MW) {{
	{case 1://выбрали муж. роли из 1 сезона
	 ifstream F5("MAN ROLE 2.txt");
	 while (!F5.eof()) {
	 getline (F5,buff);
 	cout <<buff<<endl;} 
 	F5.close();
cin>>M1;
     ifstream F6("AkteriM2.txt"); 
     for (int i = 1; i <= M1; i++){
	 getline(F6, buff2);}
	 cout<<buff2;
     F6.close();}}
	 break;	
{case 2:  //выбрали жен. роли из 1 сезона
	 ifstream F7("WOMAN ROLE 2.txt");
	 while (!F7.eof()) {
	 getline (F7,buff);
 	cout <<buff<<endl;} 
 	F7.close();
cin>>M1;
     ifstream F8("AkteriW2.txt"); 
     for (int i = 1; i <= M1; i++){
	 getline(F8, buff2);}
	 cout<<buff2<<endl;
     F8.close();}}
	 break;
	 
	 {case 3://выбрали 3 сезон
		cout << "Filtrazija dannix:" << endl;
		cout << "1)man role - 3 sezona" << endl;
		cout << "2)woman role - 3 sezona" << endl;
		cin >> MW;}
	switch (MW) {{
	{case 1://выбрали муж. роли из 3 сезона
	 ifstream F9("MAN ROLE 3.txt");
	 while (!F9.eof()) {
	 getline (F9,buff);
 	cout <<buff<<endl;} 
 	F9.close();
cin>>M1;
     ifstream F10("AkteriM3.txt"); 
     for (int i = 1; i <= M1; i++){
	 getline(F10, buff2);}
	 cout<<buff2;
     F10.close();}}
	 break;	
{case 2:  //выбрали жен. роли из 3 сезона
	 ifstream F11("WOMAN ROLE 3.txt");
	 while (!F11.eof()) {
	 getline (F11,buff);
 	cout <<buff<<endl;} 
 	F11.close();
cin>>M1;
     ifstream F12("AkteriW3.txt"); 
     for (int i = 1; i <= M1; i++){
	 getline(F12, buff2);}
	 cout<<buff2<<endl;
     F12.close();}}}
    break;
 
{case 2:
	 ifstream   M("AKTERI.txt");
	 while (!M.eof()) {
	 getline (M,buff);
 	cout <<buff<<endl;} 
 	M.close();
 	cout<<"Vernutsja v meny? (Y/N)"<<endl;
 	cin>>x;
 	if (x=='Y' || x=='y') { goto label1;} 
	 else {system("pause");}
}}
 

	return 0;
}